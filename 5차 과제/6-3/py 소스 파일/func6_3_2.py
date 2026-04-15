def print_func(front, item, ckeck):
    if ckeck: print(f"삽입{item}>> queue:[", end="")
    else : print(f"삭제>> queue:[", end="")

    temp=front
    while temp:
        print(f"{temp.data} ", end="")
        temp=temp.link
    print("]", end="")

