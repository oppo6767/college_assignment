#pragma once

typedef struct queue{
    struct queue* link_left;
    int data;
    struct queue* link_right;
} queue;

typedef enum { front_en, rear_en, front_de, rear_de } print_mode;


typedef int element1;
typedef char element2;

extern queue* front;
extern queue* rear;

void front_enqueue(element2 item);
void rear_enqueue(element2 item);
void print(element2 item, print_mode mode);
element2 front_dequeue();
element2 rear_dequeue();