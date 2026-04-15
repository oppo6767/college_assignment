from header6_4 import queue
from header6_4 import print_made
from func6_4_2 import print_func

class Linked_queue:
    def __init__(self):
        self.rear=None
        self.front=None

    def front_enqueue(self, item):
        new_queue=queue(item)
        new_queue.link=None

        if self.front is None:
            self.rear=new_queue
            self.front=new_queue
        else:
            self.front.link_left=new_queue
            new_queue.link_right=self.front
            self.front=new_queue
        print_func(self.front, item, print_made.front_en)

    def rear_enqueue(self, item):
        new_queue=queue(item)
        new_queue.link=None

        if self.rear is None:
            self.rear=new_queue
            self.front=new_queue
        else:
            self.rear.link_right=new_queue
            new_queue.link_left=self.rear
            self.rear=new_queue
        print_func(self.front, item, print_made.rear_en)

    def front_dequeue(self):
        value=self.front.data
        self.front=self.front.link_right
        self.front.link_left=None
        print_func(self.front, None, print_made.front_de)
        return value
    
    def rear_dequeue(self):
        value=self.rear.data
        self.rear=self.rear.link_left
        self.rear.link_right=None
        print_func(self.front, None, print_made.rear_de)
        return value