#include <stdio.h>
#include <stdbool.h>
#include "6-1.h"

void enqueue(elment2* queue, elment2 item) {
    if (queue_full()) {
        printf("queue is full.\n");
        print(queue, true);
        return;
    }
    queue[++rear] = item;
    print(queue, true);
}

elment2 dequeue(elment2* queue) {
    if (queue_empty()) {
        printf("queue is empty.\n");
        return -1; // 또는 다른 에러 값을 반환
    }
    elment2 item = queue[++front];
    print(queue, false);
    return item;
}