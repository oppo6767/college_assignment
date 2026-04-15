#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "4-2.h"

// 출력
void print(startNode* week) {
    listNode* p=week->head;
    printf("L=(");
    while (p!=NULL) {
        printf("%s", p->data);
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

// 탐색
listNode* search(startNode* week, char* x) {
    listNode* temp = week->head;
    while (temp !=NULL && strcmp(temp->data, x)!=0) // 같은 값 찾기
        temp=temp->link;
    return temp;
}

// 삭제
void delete(startNode* week, listNode* p) {
    listNode* temp;
    if (week->head==NULL) return; // 시작 리스트가 공백 리스트일 경우 종료
    /* 노드가 첫 번째인 경우하고 노드가 하나인 경우는 제외
    이유: 이미 데이터 입력을 월 수 금을 했음, 게다가 삭제 노드가 마지막 노드여서
          세그폴트(Segmentation Fault)가 일어날 이유가 없음*/
    else if (p==NULL) return; // 삭제할 노드가 없음
    else {
        temp=week->head;
        while (temp->link!=p)
            temp=temp->link;
        temp->link=p->link;
        free(p);
    }
}

// 역순 - 데이터 원본 유지O
void reverse(startNode* week) {
    listNode* temp = week->head;
    char* arr[10];
    int len=0;

    while(temp!=NULL) {
        arr[len++]=temp->data;
        temp=temp->link;
    }
    printf("L=(");
    while (len>0) {
        printf("%s", arr[--len]);
        if (len!=0) printf(", ");
    }
    printf(")");
}