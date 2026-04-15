#include <stdio.h>
#include "6-4.h"

void print(element2 item, print_mode mode) {
    switch (mode) {
        case front_en: 
            printf("front 삽입%c>> DeQue[", item);
            break;
        case rear_en: 
            printf("rear  삽입%c>> DeQue[", item);
            break;
        case front_de: 
            printf("front 삭제>> DeQue[");
            break;
        case rear_de: 
            printf("rear  삭제>> DeQue[");
            break;
    }

    queue* temp=front;
    while (temp!=NULL) {
        printf("%c ", temp->data);
        temp=temp->link_right;
    }
    printf("]");
}