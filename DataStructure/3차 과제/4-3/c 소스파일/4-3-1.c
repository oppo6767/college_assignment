#include <stdlib.h>
#include <string.h>
#include "4-3.h"

// 공백 연결 리스트
startNode* Empty_limked_link(void) {
    startNode* week = (startNode*)malloc(sizeof(startNode));
    week -> head=NULL;
    return week;
}

// 처음 노드 삽입
void insertFirst_list(startNode* week, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);

    // 시작 부분이 NULL일 경우 연결하기
    if (week->head==NULL) {
        week->head=newNode;
        newNode->link=newNode;
        return;    
    }

    // 시작 부분이 NULL이 아닐 경우 마지막인 리스트 찾아서 연결하기
    listNode* temp=week->head;
    while (temp->link!=week->head) 
        temp=temp->link;
    temp->link=newNode; // 삽입 노드 링크에 처음 노드 주소를 삽입
    newNode->link=week->head; // 마지막 링크에 삽입 노드 주소를 삽입
}

// 중앙 값 삽입
void insertMiddle(startNode* week, listNode* p, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);

    // 시작 리스트가 NULL일 경우
    if (week->head==NULL) {
        week->head=newNode;
        newNode->link=newNode;
    } else if (p==NULL) { // p가 NULL인 경우 = 앞에 아무것도 없다
        listNode* temp=week->head;
        while (temp->link!=week->head)
            temp=temp->link;
        newNode->link=week->head;
        temp->link=newNode;
        week->head=newNode;
    } else { // 중간에 삽입
        newNode->link=p->link;
        p->link=newNode;
    }
}