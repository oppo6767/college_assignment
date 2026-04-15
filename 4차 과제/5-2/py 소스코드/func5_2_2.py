from header5_2 import Stack
from func5_2_1 import LinkdedStack

def print_func(list, newline=True):
    print("STACK[", end="")
    temp=list.top
    while temp:
        print(temp.stack, end="")
        if temp.link is not None:
            print(" ", end="")
        temp=temp.link
    if newline:
        print("]")
    else:
        print("]", end="")

