#include <stdio.h>
#include <stdio.h>
#include "6-1.h"

void print(elment2* queue, bool is_enqueuing) {
    if (is_enqueuing) printf("삽입>> Queue:[");
    else printf("삭제>> Queue:[");
    for (int i = front + 1; i <= rear; i++) {
        printf("%c ", queue[i]);
    }
    printf("]");
    if (is_enqueuing)  printf("\n");
}

elment1 queue_full() {
    if (rear == size - 1)
        return 1; // 큐가 가득 찼음
    return 0; // 큐에 여유 공간이 있음
}

elment1 queue_empty() {
    if (front == rear)
        return 1; // 큐가 비어 있음
    return 0; // 큐에 요소가 있음
}