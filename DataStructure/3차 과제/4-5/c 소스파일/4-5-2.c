#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "4-5.h"

// 출력
void print(startNode* PL, int num) {
    if (num==1) printf("A(x)= ");
    else if (num==2) printf("B(x)= ");
    else printf("C(x)= ");
    
    listNode* p=PL->head;
    while (p!=NULL) {
        printf("%dx^%d", p->coef, p->expo);
        p=p->Rlink;
        if (p!=NULL) printf(" + ");
    }
    printf("\n");
    
}

// 연결 리스트의 전체 메모리 해제
void limked_link_Free(startNode* PL) {
    listNode* p=PL->head;
    while (PL->head!=NULL) {
        PL->head=PL->head->Rlink; // 시작 리스트에 다음 노드 주소를 저장
        if (PL->head!=NULL) PL->head->Llink=NULL;
        free(p);
        p=NULL;
    }
}

// 다항식 계산
void add(startNode* a, startNode* b, startNode* c) {
    listNode* PL_a=a->head;
    listNode* PL_b=b->head;
    int expo_c;
    while (PL_a!=NULL&&PL_b!=NULL) {
        if (PL_a->expo > PL_b->expo) {
            insertNode(c, PL_a->coef, PL_a->expo);
            PL_a=PL_a->Rlink;
        } else if (PL_a->expo == PL_b->expo) {
            int coef_c=(PL_a->coef)+(PL_b->coef);
            insertNode(c, coef_c, PL_a->expo);
            PL_a=PL_a->Rlink;
            PL_b=PL_b->Rlink;
        } else {
            insertNode(c, PL_b->coef, PL_b->expo);
            PL_b=PL_b->Rlink;
        }
    }

    //나머지 항 복사
    while (PL_a!=NULL) {
        insertNode(c, PL_a->coef, PL_a->expo);
        PL_a=PL_a->Rlink;    
    }

    while (PL_b!=NULL) {
        insertNode(c, PL_b->coef, PL_b->expo);
        PL_b=PL_b->Rlink;
    }
}