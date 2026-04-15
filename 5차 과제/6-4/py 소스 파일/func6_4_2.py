from header6_4 import print_made

def print_func(front, item, mode):
    match mode:
        case print_made.front_en:
            print(f"front 삽입{item}>> DeQue:[", end="")
        case print_made.rear_en:
            print(f"rear  삽입{item}>> DeQue:[", end="")
        case print_made.front_de:
            print(f"front 삭제>> DeQue:[", end="")
        case print_made.rear_de:
            print(f"rear  삭제>> DeQue:[", end="")

    temp=front
    while temp:
        print(f"{temp.data} ", end="")
        temp=temp.link_right
    print("]", end="")

