from header7_2 import treeNode
from func7_2_1 import *

def main():
    F11=treeMake(120, None, None)
    F10=treeMake(55, None, None)
    F9=treeMake(100, None, None)
    F8=treeMake(200, None, None)
    F7=treeMake(68, F10, F11)
    F6=treeMake(40, None, None)
    F5=treeMake(15, None, None)
    F4=treeMake(2, F8, F9)
    F3=treeMake(10, F6, F7)
    F2=treeMake(0, F4, F5)
    F1=treeMake(0, F2, F3)

    postorder(F1)

    print(f"C:\\의 용량{F2.data}")
    print(f"D:\\의 용량{F3.data}")
    print(f"내 컴퓨터 전체 용량{F1.data}")

if __name__=="__main__":
    main()