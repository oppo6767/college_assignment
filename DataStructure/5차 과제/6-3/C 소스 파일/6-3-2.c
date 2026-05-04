#include <stdio.h>
#include <stdbool.h>
#include "6-3.h"

void print(element2 item, bool check) {
    queue* temp = front;
    if(check) printf("삽입%c>> queue: [", item);
    else printf("삭제%c>> queue: [", item);
    while(temp!=NULL) {
        printf("%c ", temp->data);
        temp=temp->link;
    }
    printf("]");
}

element1 queue_empty() {
    if(front==NULL) {
        printf("queue is empty\n");
        return 1;
    }
    return 0;
}