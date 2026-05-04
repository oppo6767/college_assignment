#pragma once
#include <stdbool.h>

#define size 4 //배열 크기

typedef int elment1;
typedef char elment2;
extern elment1 front;
extern elment1 rear;
extern elment2 queue[size];

void enqueue(elment2* queue, elment2 item);
elment2 dequeue();
elment1 queue_full();
elment1 queue_empty();
void print(elment2* queue, bool isEnqueue);