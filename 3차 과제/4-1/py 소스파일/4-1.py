from node4_1 import listnode
from link_list4_1 import startNode

def main() :
    print("(1)공백 리스트 만들기")
    week = startNode()
    week.print_func()

    print("(2) 리스트에 [수]노드 삽입하기!");
    week.insrtfirst('수')
    week.print_func()

    print("(3) 리스트에 마지막에 [금]노드 삽입하기!");
    week.insrtlast('금')
    week.print_func()

    print("(4) 리스트 첫 번째에 [월]노드 삽입하기!");
    week.insrtfirst('월')
    week.print_func()

    print("(5) 리스트 공간을 해제하여 공백 리스트로 만들기!");
    week.linked_link_Free()
    week.print_func()

if __name__ == "__main__":
    main()