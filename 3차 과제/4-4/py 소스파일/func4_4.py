from node4_4 import listnode

def print_func(week):
    p=week.head
    print("CL=(", end="")
    while p is not None:
        print(p.data, end="")
        if p.Rlink is not None: print(", ", end="")
        p=p.Rlink
    print(")\n")

def search(week, data):
    temp=week.head
    while temp.data is not data:
        temp=temp.Rlink
    return temp
    
def delete(week, p):
    temp=week.head
    while temp.Rlink is not p:
        temp=temp.Rlink
    temp.Rlink=p.Rlink
    # 나머지 체크 항목은 제외시킴 = 수요일 제거여서 굳이 할 필요 없음