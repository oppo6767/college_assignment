from header7_1 import treeNode

def treeMake(data, L, R):
    node=treeNode(data)
    node.L=L
    node.R=R
    return node

def preorder(node1):
    if node1 is not None:
        print(node1.data, end='')
        preorder(node1.L)
        preorder(node1.R)

def inorder(node1):
    if node1 is not None:
        inorder(node1.L)
        print(node1.data, end='')
        inorder(node1.R)

def postorder(node1):
    if node1 is not None:
        postorder(node1.L)
        postorder(node1.R)
        print(node1.data, end='')