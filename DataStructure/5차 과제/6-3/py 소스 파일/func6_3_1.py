from header6_3 import queue
from func6_3_2 import print_func

class Linked_queue:
    def __init__(self):
        self.rear=None
        self.front=None

    def enqueue(self, item):
        new_queue=queue(item)
        new_queue.link=None

        if self.rear is None:
            self.rear=new_queue
            self.front=new_queue
        else:
            self.rear.link=new_queue
            self.rear=new_queue
        print_func(self.front, item, True)

    def dequeue(self):
        value=self.front.data
        self.front=self.front.link
        if self.front is None: self.rear=None
        print_func(self.front, None, False)
        return value