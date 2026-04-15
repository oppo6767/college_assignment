from node4_2 import listnode

class startNode:
    def __init__(self):
        self.head=None

    def insertfirst(self, data):
        new_Node=listnode(data)
        new_Node.link=self.head
        self.head=new_Node
    
    def insertmiddle(self, p, data):
        new_Node=listnode(data)
        if self.head is None:
            new_Node.link=self.head
            self.head=new_Node
        elif p is None:
            new_Node.link=self.head
            self.head=new_Node
        else:
            new_Node.link=p.link
            p.link=new_Node

    def insertlast(self, data):
        new_Node=listnode(data)
        new_Node.link=None
        
        # 시작 부분이 None일 경우
        if self.head is None:
            self.head=new_Node
            return
        
        temp=self.head
        while temp.link is not None:
            temp=temp.link
        temp.link=new_Node

    def linked_link_Free(self):
        while self.head is not None:
            p=self.head
            self.head=self.head.link
            p.link=None #<- 이 부분 추가
