from node4_4 import listnode
from link_list4_4 import startNode
from func4_4 import print_func
from func4_4 import search
from func4_4 import delete

def main() :
    week = startNode()
    print("(1)이중 연결 리스트 생성하기!")
    print_func(week)

    print("(2)이중 연결 리스트에 [월] 노드 삽입하기!")
    week.insertNode('월')
    print_func(week)

    print("(3)이중 연결 리스트의 [월]노드 뒤에 [수] 노드 삽입하기!")
    week.insertNode('수')
    print_func(week)

    print("(4)이중 연결 리스트의 [수]노드 뒤에 [금] 노드 삽입하기!")
    week.insertNode('금')
    print_func(week)

    print("(5)이중 연결 리스트에서 [수]노드 삭제하기!")
    p=search(week, '수')
    delete(week, p)
    print_func(week)
    
    week.linked_link_Free()

if __name__ == "__main__":
    main()