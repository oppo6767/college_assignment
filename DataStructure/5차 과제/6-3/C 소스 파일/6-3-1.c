#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "6-3.h"

//연결 리스트 마지막 삽입으로 구현한 큐
void enqueue(element2 item) {
    queue* newNode = (queue*)malloc(sizeof(queue));
    newNode->data = item;
    newNode->link = NULL;

    if(rear==NULL)
        front=rear=newNode;
    else {
        rear->link = newNode;
        rear = newNode;
    }
    print(item, true);
}

element2 dequeue() {
    if(queue_empty()) return -1;

    queue* temp = front;
    element2 item=temp->data;
    front = front->link;
    if(front==NULL) rear=NULL;
    free(temp);
    print(item, false);
    return item;
}