#include <stdlib.h>
#include <string.h>
#include "4-2.h"

// 공백 연결 리스트
startNode* Empty_limked_link(void) {
    startNode* week = (startNode*)malloc(sizeof(startNode));
    week -> head=NULL;
    return week;
}

// 처음 값 삽입
void insertFirst(startNode* week, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    newNode->link=week->head;
    week->head=newNode;
}

// 중앙 값 삽입
void insertMiddle(startNode* week, listNode* p, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);

    // 시작 리스트가 NULL일 경우
    if (week->head==NULL) {
        week->head=newNode;
        newNode->link=NULL;
    } else if (p==NULL) { // p가 NULL인 경우 = 앞에 아무것도 없다
        newNode->link=week->head;
        week->head=newNode;
    } else { // 중간에 삽입
        newNode->link=p->link;
        p->link=newNode;
    }
}

// 마지막 값 삽입
void insertList(startNode* week, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    newNode->link=NULL;

    // 시작 부분이 NULL일 경우 연결하기
    if (week->head==NULL) {
        week->head=newNode;
        return;    
    }

    // 시작 부분이 NULL이 아닐 경우 마지막인 리스트 찾아서 연결하기
    listNode* temp=week->head;
    while (newNode->link!=NULL) 
        temp=temp->link;
    temp->link=newNode;
}
