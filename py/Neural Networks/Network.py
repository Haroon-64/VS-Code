import math
from graphviz import Digraph


class Value:
    # noinspection PyProtectedMember
    """
    class to store operands and operation for some expression
    """

    def __init__(self, data, _children=(), _op='', label=''):
        self.data = data
        self.grad = 0.  # store the derivative of the loss wrt current variable
        self._backward = lambda: None  # find derivative
        self._prev = set(_children)  # store previous objects when operations are called
        self._op = _op  # store operation that created children
        self.label = label

    def __repr__(self) -> str:
        return f"Value(data={self.data})"

    def __add__(self, other):
        """keeps track of values and operand that make the output"""
        other = other if isinstance(other, Value) else Value(other)  # value(x) + number(y)
        out = Value(self.data + other.data, _children=(self, other), _op='+')

        def _backward():
            # need to accumulate in case variable is used twice
            # derivative when adding addition is derivative of output node : d(self)/dy = 1.0
            self.grad += 1. * out.grad
            other.grad += 1. * out.grad

        out._backward = _backward
        return out

    def __neg__(self):
        return self * -1

    def __sub__(self, other):
        return self + (-other)

    def __mul__(self, other):
        other = other if isinstance(other, Value) else Value(other)
        out = Value(self.data * other.data, _children=(self, other), _op='*')

        def _backward():
            self.grad += other.data * out.grad  # derivative when mul is found by chain rule : d(self)/dz*(dz/dy)
            other.grad += self.data * out.grad

        out._backward = _backward
        return out

    def __pow__(self, other, modulo=None):
        assert isinstance(other, (int, float))
        out = Value(self.data ** other, _children=(self,), _op=f"**{other}")

        def _backward():
            self.grad = other * self.data ** (other - 1) * out.grad

        out._backward = _backward
        return out

    def __rmul__(self, other):  # x * value
        return self * other  # x + value

    def __radd__(self, other):
        return self + other

    def __truediv__(self, other):
        return self * other ** -1

    def exp(self):
        x = self.data
        out = Value(math.exp(x), _children=(self,), _op='exp')

        def _backward():
            self.grad += out.data * out.grad

        out._backward = _backward
        return out

    def tanh(self):
        t = (math.exp(2 * self.data) - 1) / (math.exp(2 * self.data) + 1)
        out = Value(t,
                    _children=(self,),
                    _op='tanh')

        def _backward():
            self.grad += (1 - t ** 2) * out.grad  # grad(tanh) = (1 - tanh**2) * d(out)

        out._backward = _backward
        return out

    def backward(self):
        """
        backpropagation after ordering the graph from children to root
        https://en.wikipedia.org/wiki/Topological_sorting
        """
        topo = []
        visited = set()

        def build_topo(v):
            """
            sort (children -> root)
            """
            if v not in visited:
                visited.add(v)
                for child in v._prev:
                    build_topo(child)
                topo.append(v)

        build_topo(self)

        self.grad = 1.0
        for node in reversed(topo):
            node._backward()
