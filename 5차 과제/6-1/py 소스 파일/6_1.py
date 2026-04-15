def main():
    queue=[]
    queue.append('A')
    print(f"삽입A>> queue:{queue}")
    queue.append('B')
    print(f"삽입B>> queue:{queue}")
    queue.append('C')
    print(f"삽입C>> queue:{queue} peek item:{queue[0]}\n")

    item=queue.pop(0)
    print(f"삭제>> queue:{queue}\t삭제 데이터:{item}")
    item=queue.pop(0)
    print(f"삭제>> queue:{queue}\t삭제 데이터:{item}")
    item=queue.pop(0)
    print(f"삭제>> queue:{queue}\t\t삭제 데이터:{item}")

    queue.append('D')
    print(f"삽입D>> queue:{queue}")
    print(f"삽입E>> queue is full\n\tqueue:{queue}")
if __name__ == "__main__":
    main()