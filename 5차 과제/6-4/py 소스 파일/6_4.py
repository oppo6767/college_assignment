from header6_4 import queue
from func6_4_1 import Linked_queue

def main():
    queue=Linked_queue()
    print("*****데크 연산*****")

    queue.front_enqueue('A')
    print()
    queue.front_enqueue('B')
    print()
    queue.rear_enqueue('C')
    print()

    item=queue.front_dequeue()
    print(f"\t삭제 데이터:{item}")
    item=queue.rear_dequeue()
    print(f"\t\t삭제 데이터:{item}")

    queue.rear_enqueue('D')
    print()
    queue.front_enqueue('E')
    print()
    queue.front_enqueue('F')
    print()

if __name__ == "__main__":
    main()