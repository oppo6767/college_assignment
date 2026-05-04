from enum import Enum

class queue:
    def __init__(self, data=None):
        self.link_left=None
        self.data=data
        self.link_right=None

class print_made(Enum):
    front_en=0
    rear_en=1
    front_de=2
    rear_de=3
