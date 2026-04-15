def delete(arr, index):
    dex=2
    count=0
    while dex<(index-1):
        arr[dex]=arr[dex+1]
        dex+=1
        count+=1
    arr[dex]=0
    return count


def insert(arr, index):
    index-=1
    count=0
    while index>=0:
        if arr[index]==20:
            arr[index+1]=30
            break
        arr[index+1]=arr[index]
        index-=1
        count+=1
    return count


def print_def(arr, size, count):
    if count==0: print("삽입 전 선형 리스트: ", end="")
    elif size==6: print("삭제 후 선형 리스트: ", end="")
    else: print("삽입 후 선형 리스트: ", end="")

    for i in range(size): print(f"{arr[i]} ", end="")
    print("")
    print(f"원소의 갯수:{size}")
    if size==6 and count==0:
        print("")
    
    if count != 0:
        print(f"자리 이동 횟수: {count}\n")
