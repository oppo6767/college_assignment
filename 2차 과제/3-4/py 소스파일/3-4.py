from func_list3_4 import print_def
from func_list3_4 import insert
from func_list3_4 import delete

def main() :
    arr = [10, 20, 40, 50, 60, 70, 0, 0]
    count=0
    size=0

    # 초반 형태 및 개수
    for i in range(8):
        if arr[i]!=0: size+=1
    print_def(arr, size, count)

    # 삽입 후
    count=insert(arr, size)
    size=0
    for i in range(8):
        if arr[i]!=0: size+=1
    print_def(arr, size, count)

    #삭제 후
    count=delete(arr, size)
    size=0
    for i in range(8):
        if arr[i]!=0: size+=1
    print_def(arr, size, count)    

if __name__ == "__main__":
    main()