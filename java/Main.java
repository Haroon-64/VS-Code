package com.example;

import ai.onnxruntime.*;
import org.opencv.core.Core;

import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.nio.FloatBuffer;
import java.util.Collections;

public class Main {
  static {
    System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
  }


  private OnnxTensor preprocessImage(BufferedImage image, OrtEnvironment env) throws OrtException {
  int width = 224;
  int height = 224;
  BufferedImage resizedImage = new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);
  Graphics2D g = resizedImage.createGraphics();
  g.drawImage(image, 0, 0, width, height, null);
  g.dispose();

  int[] pixels = new int[width * height];
  resizedImage.getRGB(0, 0, width, height, pixels, 0, width);

  float[] floatPixels = new float[3 * width * height];
  for (int i = 0; i < pixels.length; i++) {
    Color color = new Color(pixels[i]);
    float red = color.getRed() / 255.0f;
    float green = color.getGreen() / 255.0f;
    float blue = color.getBlue() / 255.0f;

    // Normalize the pixel values using the mean and standard deviation
    floatPixels[i * 3] = (red - 0.485f) / 0.229f;   // Red channel
    floatPixels[i * 3 + 1] = (green - 0.456f) / 0.224f; // Green channel
    floatPixels[i * 3 + 2] = (blue - 0.406f) / 0.225f; // Blue channel
  }

  FloatBuffer buffer = FloatBuffer.wrap(floatPixels);
  return OnnxTensor.createTensor(env, buffer, new long[]{1, 3, height, width});
}


  private String classifyImage(BufferedImage image) {
    try (OrtEnvironment env = OrtEnvironment.getEnvironment();
         OrtSession session = env.createSession("path/to/your/model.onnx", new OrtSession.SessionOptions())) {
      OnnxTensor inputTensor = preprocessImage(image, env);
      OrtSession.Result result = session.run(Collections.singletonMap("input", inputTensor));
      float[] output = (float[]) result.get(0).getValue();
      int predictedClass = argMax(output);
      double probability = output[predictedClass];
      return "Class: " + predictedClass + ", Probability: " + probability;
    } catch (OrtException e) {
      e.printStackTrace();
      return "Error";
    }
  }

  private int argMax(float[] array) {
    int maxIndex = 0;
    for (int i = 1; i < array.length; i++) {
      if (array[i] > array[maxIndex]) {
        maxIndex = i;
      }
    }
    return maxIndex;
  }

  private void createAndShowGUI() {
    JFrame frame = new JFrame("Image Classification");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(800, 600);
    frame.setLayout(new BorderLayout());

    JButton openButton = new JButton("Open Image");
    JLabel imageLabel = new JLabel();
    JLabel resultLabel = new JLabel("Prediction: ");

    openButton.addActionListener(e -> {
      JFileChooser fileChooser = new JFileChooser();
      if (fileChooser.showOpenDialog(frame) == JFileChooser.APPROVE_OPTION) {
        File selectedFile = fileChooser.getSelectedFile();
        try {
          BufferedImage image = ImageIO.read(selectedFile);
          imageLabel.setIcon(new ImageIcon(image));
          String prediction = classifyImage(image);
          resultLabel.setText("Prediction: " + prediction);
        } catch (IOException ex) {
          ex.printStackTrace();
        }
      }
    });

    frame.add(openButton, BorderLayout.NORTH);
    frame.add(new JScrollPane(imageLabel), BorderLayout.CENTER);
    frame.add(resultLabel, BorderLayout.SOUTH);

    frame.setVisible(true);
  }

  public static void main(String[] args) {
    SwingUtilities.invokeLater(() -> new Main().createAndShowGUI());
  }
}
