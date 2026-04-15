from header5_3 import Stack

class LinkdedStack:
    def __init__ (self):
        self.top=None

    def push_func(self, item):
        new_node=Stack(item)
        new_node.link=self.top
        self.top=new_node

    def pop_func(self):
        if self.top is None:
            print("stack underflow")
            exit(1)

        self.top=self.top.link