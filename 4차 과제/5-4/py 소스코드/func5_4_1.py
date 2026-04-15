from header5_4 import Stack
from func5_4_2 import calculate

class LinkdedStack:
    def __init__ (self):
        self.top=None

    def push_func(self, item):
        new_node=Stack(item)
        new_node.link=self.top
        self.top=new_node

    def pop_func(self, operations):
        if self.top is None:
            print("stack underflow")
            exit(1)

        return calculate(self, operations)