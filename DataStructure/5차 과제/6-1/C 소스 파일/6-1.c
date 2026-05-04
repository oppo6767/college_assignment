#include <stdio.h>
#include "6-1.h"

elment1 front=-1;
elment1 rear=-1;
elment2 queue[size];

int main() {
    printf("*****순차 큐 연산*****\n");
    enqueue(queue, 'A');
    enqueue(queue, 'B');
    enqueue(queue, 'C');
    printf("peek item: %c\n\n", queue[front + 1]);

    elment2 item = dequeue(queue);
    printf("\t삭제 데이터: %c\n", item);
    item = dequeue(queue);
    printf("\t삭제 데이터: %c\n", item);
    item = dequeue(queue);
    printf("\t\t삭제 데이터: %c\n", item);
    enqueue(queue, 'D');
    enqueue(queue, 'E');
}

