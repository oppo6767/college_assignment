from node4_5 import listnode
from link_list4_5 import startNode

def print_func(PL, num):
    if num==1: print("A(x)= ", end="")
    elif num==2: print("B(x)= ", end="")
    else: print("C(x)= ", end="")

    p=PL.head
    while p is not None:
        print(f"{p.coef}x^{p.expo}", end="")
        if p.link is not None: print(" + ", end="")
        p=p.link
    print("")


def add(a, b, c):
    PL_a=a.head
    PL_b=b.head
    while PL_a is not None and PL_b is not None:
        if PL_a.expo>PL_b.expo:
            c.insertNode(PL_a.coef, PL_a.expo)
            PL_a=PL_a.link
        elif PL_a.expo==PL_b.expo:
            coef_c=PL_a.coef+PL_b.coef
            c.insertNode(coef_c, PL_a.expo)
            PL_a=PL_a.link
            PL_b=PL_b.link
        else:
            c.insertNode(PL_b.coef, PL_b.expo)
            PL_b=PL_b.link
    
    while PL_a is not None:
        c.insertNode(PL_a.coef, PL_a.expo)
        PL_a=PL_a.link
    
    while PL_b is not None:
        c.insertNode(PL_b.coef, PL_b.expo)
        PL_b=PL_b.link