from node4_4 import listnode

class startNode:
    def __init__(self):
        self.head=None

    def insertNode(self, data):
        new_Node=listnode(data)
        
        # 시작 부분이 None일 경우
        if self.head is None:
            self.head=new_Node
            new_Node.Llink=None
            new_Node.Rlink=None
            return
        
        # None이 아닐 경우
        temp=self.head
        while temp.Rlink is not None:
            temp=temp.Rlink
        temp.Rlink=new_Node
        new_Node.Rlink=None
        new_Node.Llink=temp

    def linked_link_Free(self):
        while self.head is not None:
            p=self.head
            self.head=self.head.Rlink
            p.Llink=None
            p.Rlink=None
