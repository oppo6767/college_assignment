#include <stdlib.h>
#include <string.h>
#include "4-5.h"

// 공백 연결 리스트
startNode* Empty_limked_link(void) {
    startNode* PL = (startNode*)malloc(sizeof(startNode));
    PL -> head=NULL;
    return PL;
}

// 처음 노드 삽입
void insertNode(startNode* PL, int coef, int expo) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));

    // 시작 부분이 NULL일 경우 연결하기
    if (PL->head==NULL) {
        PL->head=newNode;
        newNode->Llink=NULL;
        newNode->coef=coef;
        newNode->expo=expo;
        newNode->Rlink=NULL;
        return;    
    }

    // 시작 부분이 NULL이 아닐 경우 마지막인 리스트 찾아서 연결하기
    listNode* temp=PL->head;
    while (temp->Rlink!=NULL) temp=temp->Rlink;
    temp->Rlink=newNode;
    newNode->Rlink=NULL;
    newNode->coef=coef;
    newNode->expo=expo;
    newNode->Llink=temp;
}