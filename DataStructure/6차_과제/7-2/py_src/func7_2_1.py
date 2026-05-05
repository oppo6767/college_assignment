from header7_2 import treeNode

def treeMake(data, L, R):
    node=treeNode(data)
    node.L=L
    node.R=R
    return node

def postorder(node):
    if node is not None:
        postorder(node.L)
        postorder(node.R)
        if node.L is not None:
            node.data+=node.L.data
        if node.R is not None:
            node.data+=node.R.data