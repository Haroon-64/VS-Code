# Project to translate ASL(American Sign Language) to English     `Maybe Vice-Versa`

* data 
`https://www.kaggle.com/datasets/datamunge/sign-language-mnist`

* * label (0-25) as a one-to-one map for each alphabetic letter A-Z (and no cases for 9=J or 25=Z because of gesture motions) 
* each row has -  label, pixel1,pixel2….pixel784 which represent a single 28x28 pixel image with grayscale values between 0-255


* plan
1. make and train a neural network that can classify the letters ( maybe figure out for J and Z)        `hopefully from scratch`
2. make a NLP model that can predict spaces / grammar
3. translate the ASL to English