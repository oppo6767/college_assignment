#pragma once
#include <stdbool.h>

typedef struct queue{
    int data;
    struct queue* link;
} queue;

typedef int element1;
typedef char element2;

extern queue* front;
extern queue* rear;

void enqueue(element2 item);
element2 dequeue();
void print(element2 item, bool check);
element1 queue_empty();