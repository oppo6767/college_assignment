#include <stdio.h>
#include <stdbool.h>
#include "6-2.h"

void print(elment2* queue, bool isEnqueue) {
    if (isEnqueue) printf("삽입>> Circular Queue: [");
    else printf("삭제>> Circular Queue: [");
    for(elment1 i=front+1;i<=rear;i++)
        printf("%c ", queue[i%size]);
    printf("]");
}

elment1 queue_full() {
    if (front == ((rear+1) % size)) {
        printf("queue is full\n");
        return 1;
    }
    return 0;
}

elment1 queue_empty() {
    if(front == rear) {
        printf("queue is empty\n");
        return 1;
    }
    return 0;
}