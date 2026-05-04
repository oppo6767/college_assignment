from header7_1 import treeNode
from func7_1_1 import *

def main():
    node7=treeMake('A', None, None)
    node6=treeMake('B', None, None)
    node5=treeMake('C', None, None)
    node4=treeMake('D', None, None)
    node3=treeMake('*', node7, node6)
    node2=treeMake('/', node5, node4)
    node1=treeMake('-', node3, node2)

    preorder(node1)
    print()

    inorder(node1)
    print()
    
    postorder(node1)
    print()

if __name__=="__main__":
    main()