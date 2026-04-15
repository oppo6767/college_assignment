from node4_3 import listnode

def print_func(week):
    if week.head is None:
        print("CL= ()\n")
        return

    p=week.head
    print("CL=(", end="")
    while True:
        print(p.data, end="")
        if p.link is not week.head: print(", ", end="")
        p=p.link
        if p is week.head:
            break
    print(")\n")

def search(week, data):
    temp=week.head
    while True:
        if temp.data == data:
            return temp
        temp=temp.link
        if temp is week.head:
            break

def delete(week, p):
    temp=week.head
    while temp.link is not p:
        temp=temp.link
    temp.link=p.link
    # 나머지 체크 항목은 제외시킴 = 수요일 제거여서 굳이 할 필요 없음