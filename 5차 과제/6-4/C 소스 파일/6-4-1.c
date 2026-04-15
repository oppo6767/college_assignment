#include <stdio.h>
#include <stdlib.h>
#include "6-4.h"

void front_enqueue(element2 item) {
    queue* new_queue=(queue*)malloc(sizeof(queue));
    new_queue->data=item;
    new_queue->link_left=NULL;
    new_queue->link_right=NULL;
    
    if (front==NULL)
        front=rear=new_queue;
    else {
        front->link_left=new_queue;
        new_queue->link_right=front;
        front=new_queue;
    }
    print(item, front_en);
}

void rear_enqueue(element2 item) {
    queue* new_queue=(queue*)malloc(sizeof(queue));
    new_queue->data=item;
    new_queue->link_left=NULL;
    new_queue->link_right=NULL;

    if (front==NULL)
        front=rear=new_queue;
    else {
        rear->link_right=new_queue;
        new_queue->link_left=rear;
        rear=new_queue;
    }
    print(item, rear_en);
}

element2 front_dequeue() {
    queue* temp=front;
    element2 item=front->data;
    front=temp->link_right;
    front->link_left=NULL;
    free(temp);
    print(0, front_de);
    return item;
}

element2 rear_dequeue() {
    queue* temp=rear;
    element2 item=rear->data;
    rear=temp->link_left;
    rear->link_right=NULL;
    free(temp);
    print(0, rear_de);
    return item;
}