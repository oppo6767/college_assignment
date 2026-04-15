#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "4-1.h"

// 출력
void print(startNode* week) {
    listNode* p;
    printf("L=(");
    p=week->head;
    while (p!=NULL) {
        printf("%s", p->date);
        p=p->link;
        if (p!=NULL) printf(", ");
    }
    printf(")\n\n");
}

// 연결 리스트의 전체 메모리 해제
void limked_link_Free(startNode* week) {
    listNode* p;
    while (week->head!=NULL) {
        p=week->head;
        week->head=week->head->link; // 시작 리스트에 다음 노드 주소를 저장
        free(p);
        p=NULL;
    }
}