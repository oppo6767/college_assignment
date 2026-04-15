from node4_2 import listnode
from link_list4_2 import startNode
from func4_2 import print_func
from func4_2 import search
from func4_2 import delete
from func4_2 import reverse_print

def main() :
    week = startNode()
    print("(1)리스트에 [월], [수], [일] 노드 삽입하기")
    week.insertfirst('월')
    week.insertlast('수')
    week.insertlast('일')
    print_func(week)

    print("(2) 리스트에서 [수]노드 탐색하기!");
    p=search(week, '수')
    print(f"[{p.data}]를 찾았습니다.\n")

    print("(3) 리스트의 [수]노드 뒤에 [금] 노드 삽입하기!");
    week.insertmiddle(p, '금')
    print_func(week)

    print("(4) 리스트에 [일]노드 삭제하기!");
    p=search(week, '일')
    delete(week, p)
    print_func(week)

    print("(5) 리스트의 순서를 역순으로 바꾸기!");
    reverse_print(week)
    
    week.linked_link_Free()

if __name__ == "__main__":
    main()