from node4_3 import listnode

class startNode:
    def __init__(self):
        self.head=None

    def insertNode(self, data):
        new_Node=listnode(data)
        
        # 시작 부분이 None일 경우
        if self.head is None:
            self.head=new_Node
            new_Node.link=self.head
            return
        
        # None이 아닐 경우
        temp=self.head
        while temp.link is not self.head:
            temp=temp.link
        temp.link=new_Node
        new_Node.link=self.head

    def linked_link_Free(self):
        start=self.head
        while True:
            p=self.head
            self.head=self.head.link
            p.link=None
            if self.head is start:
                break
        self.head=None
