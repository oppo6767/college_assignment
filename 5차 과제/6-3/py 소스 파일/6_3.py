from header6_3 import queue
from func6_3_1 import Linked_queue

def main():
    queue=Linked_queue()
    print("*****연결 큐 연산*****")
    queue.enqueue('A')
    print()

    queue.enqueue('B')
    print()

    queue.enqueue('C')
    print(f"peek item:{queue.front.data}\n")

    item=queue.dequeue()
    print(f"\t삭제 데이터:{item}")

    item=queue.dequeue()
    print(f"\t삭제 데이터:{item}")

    item=queue.dequeue()
    print(f"\t\t삭제 데이터:{item}")

    queue.enqueue('D')
    print()

    queue.enqueue('E')
    print()

if __name__ == "__main__":
    main()