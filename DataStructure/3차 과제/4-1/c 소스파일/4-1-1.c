#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "4-1.h"

// 공백 연결 리스트
startNode* Empty_limked_link(void) {
    startNode* week = (startNode*)malloc(sizeof(startNode));
    week -> head=NULL;
    return week;
}

// 처음 값 삽입
void insertFirst(startNode* week, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->date, x);
    newNode->link=week->head;
    week->head=newNode;
}

// 마지막 값 삽입
void insertList(startNode* week, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->date, x);
    newNode->link=NULL;

    // 시작 부분이 NULL일 경우 연결하기
    if (week->head==NULL) {
        week->head=newNode;
        return;    
    }

    // 시작 부분이 NULL이 아닐 경우 마지막인 리스트 찾아서 연결하기
    listNode* temp=week->head;
    while (temp->link!=NULL) 
        temp=temp->link;
    temp->link=newNode;
}
