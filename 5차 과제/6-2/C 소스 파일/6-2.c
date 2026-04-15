#include <stdio.h>
#include "6-2.h"

elment1 front=0;
elment1 rear=0;
elment2 queue[size];

int main() {
    printf("*****원형 큐 연산*****\n");
    enqueue(queue, 'A');
    printf("\n");

    enqueue(queue, 'B');
    printf("\n");

    enqueue(queue, 'C');
    printf("peek item: %c\n\n", queue[(front+1) % size]);
    
    elment2 item = dequeue();
    printf("\t삭제 데이터: %c\n", item);

    item = dequeue();
    printf("\t삭제 데이터: %c\n", item);

    item = dequeue();
    printf("\t삭제 데이터: %c\n", item);

    enqueue(queue, 'D');
    printf("\n");

    enqueue(queue, 'E');
    printf("\n");
}

