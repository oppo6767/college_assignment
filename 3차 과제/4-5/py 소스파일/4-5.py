from node4_5 import listnode
from link_list4_5 import startNode
from func4_5 import print_func
from func4_5 import add

def main() :
    a = startNode()
    b = startNode()
    c = startNode()
    coef=[4, 3, 5]
    expo=[3, 2, 1]
    for i in range(3):
        a.insertNode(coef[i], expo[i])

    coef=[3, 1, 2, 1]
    expo=[4, 3, 1, 0]
    for i in range(4):
        b.insertNode(coef[i], expo[i])

    add(a, b, c)
    print_func(a, 1)
    print_func(b, 2)
    print_func(c, 3)

    a.linked_link_Free()
    b.linked_link_Free()
    c.linked_link_Free()

if __name__ == "__main__":
    main()