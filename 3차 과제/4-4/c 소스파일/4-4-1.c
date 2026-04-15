#include <stdlib.h>
#include <string.h>
#include "4-4.h"

// 공백 연결 리스트
startNode* Empty_limked_link(void) {
    startNode* week = (startNode*)malloc(sizeof(startNode));
    week -> head=NULL;
    return week;
}

// 처음 노드 삽입
void insertNode(startNode* week, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);

    // 시작 부분이 NULL일 경우 연결하기
    if (week->head==NULL) {
        week->head=newNode;
        newNode->Llink=NULL;
        newNode->Rlink=NULL;
        return;    
    }

    // 시작 부분이 NULL이 아닐 경우 마지막인 리스트 찾아서 연결하기
    listNode* temp=week->head;
    while (temp->Rlink!=NULL) 
        temp=temp->Rlink;
    temp->Rlink=newNode;
    newNode->Rlink=NULL;
    newNode->Llink=temp;
}