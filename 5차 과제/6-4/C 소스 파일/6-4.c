#include <stdio.h>
#include "6-4.h"

queue* front = NULL;
queue* rear = NULL;

int main() {
    printf("*****데크 연산*****\n");
    front_enqueue('A');
    printf("\n");

    front_enqueue('B');
    printf("\n");

    rear_enqueue('C');
    printf("\n");

    element2 item=front_dequeue();
    printf("\t삭제 데이터:%c\n", item);

    item=rear_dequeue();
    printf("\t\t삭제 데이터:%c\n", item);

    rear_enqueue('D');
    printf("\n");

    front_enqueue('E');
    printf("\n");

    front_enqueue('F');
    printf("\n");

    printf("peek Front item:%c\n", front->data);
    printf("peek Rear item:%c\n", rear->data);

    return 0;
}
