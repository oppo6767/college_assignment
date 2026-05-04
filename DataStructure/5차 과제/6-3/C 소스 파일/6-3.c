#include <stdio.h>
#include "6-3.h"

queue* front = NULL;
queue* rear = NULL;

int main() {
    printf("*****연결 큐 연산*****\n");
    enqueue('A');
    printf("\n");

    enqueue('B');
    printf("\n");

    enqueue('C');
    printf("peek item: %c\n\n", front->data);

    element2 item = dequeue();
    printf("\t삭제 데이터: %c\n", item);

    item = dequeue();
    printf("\t삭제 데이터: %c\n", item);

    item = dequeue();
    printf("\t삭제 데이터: %c\n", item);

    enqueue('D');
    printf("\n");

    enqueue('E');
    printf("\n");
    return 0;
}
