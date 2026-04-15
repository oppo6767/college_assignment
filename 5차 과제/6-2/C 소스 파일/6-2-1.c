#include <stdio.h>
#include "6-2.h"

void enqueue(elment2* queue, elment2 item) {
    if (queue_full()) return;
    queue[(++rear) % size] = item;
    print(queue, true);
}

elment2 dequeue() {
    if(queue_empty()) return -1;
    elment2 item = queue[(++front) % size];
    print(queue, false);
    return item;
}