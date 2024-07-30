import random
from Network import Value  # 1_backprop.py


class Neuron:
    """
    implements a neuron
    """
    def __init__(self,num_inputs):
        self.weight = [Value(random.uniform(-1, 1)) for _ in range(num_inputs)]
        self.bias = Value(random.uniform(-1, 1))

    def __call__(self, inp):
        # w . x +b       call variable(inp) -> output
        activation = sum((wi*xi for wi,xi in zip(self.weight, inp)), self.bias)  # sum(generator, start)
        output = activation.tanh()
        return output


class Layer:
    """
    single layer of neuron
    """
    def __init__(self, num_inputs, num_outputs):
        self.neurons = [Neuron(num_inputs) for _ in range(num_outputs)]

    def __call__(self, inp):
        outputs = [n(inp) for n in self.neurons]
        return outputs[0] if len(outputs) == 1 else outputs


class MLP:
    """
    a multi layer perceptron
    """
    def __init__(self, num_inputs, num_outputs: list):
        sz = [num_inputs] + num_outputs
        self.layers = [Layer(sz[i], sz[i+1]) for i in range(len(num_outputs))]

    def __call__(self, inp):
        for layer in self.layers:
            inp = layer(inp)
        return inp