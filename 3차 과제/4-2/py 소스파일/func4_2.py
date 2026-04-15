from node4_2 import listnode

def print_func(week):
    p=week.head
    print("L=(", end="")
    while p:
        print(p.data, end="")
        if p.link: print(", ", end="")
        p=p.link
    print(")\n")

def search(week, data):
        temp=week.head
        while temp is not None and temp.data is not data:
            temp=temp.link
        return temp

def delete(week, p):
    temp=week.head
    while temp.link is not p:
        temp=temp.link
    temp.link=p.link
    # 나머지 체크 항목은 제외시킴 = 일요일 제거여서 굳이 할 필요 없음

def reverse_print(week):
    temp=week.head
    arr=[]
    while temp is not None:
        arr.append(temp.data)
        temp=temp.link
    
    print("L=(", end="")
    while len(arr)>0:
        print(arr.pop(), end="")
        if len(arr)!=0: print(", ", end="")
    print(")\n")