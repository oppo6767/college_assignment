from node4_5 import listnode

class startNode:
    def __init__(self):
        self.head=None

    def insertNode(self, coef_data, expo_data):
        new_Node=listnode(coef_data, expo_data)
        new_Node.link=None

        # 시작 부분이 None일 경우
        if self.head is None:
            self.head=new_Node
            return
        
        # None이 아닐 경우
        temp=self.head
        while temp.link is not None:
            temp=temp.link
        temp.link=new_Node

    def linked_link_Free(self):
        while self.head is not None:
            p=self.head
            self.head=self.head.link
            p.link=None
