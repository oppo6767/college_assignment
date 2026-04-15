#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "4-3.h"

// 출력
void print(startNode* week) {
    if (week->head==NULL) {
        printf("CL=()\n\n");
        return;
    }
    listNode* p=week->head;
    printf("CL=(");
    do{
        printf("%s", p->data);
        p=p->link;
        if (p!=week->head) printf(", ");
    } while (p!=week->head);
    printf(")\n\n");
}

// 연결 리스트의 전체 메모리 해제
void limked_link_Free(startNode* week) {
    listNode* p=week->head;
    //단순 연결 리스트로 만들기
    while (p->link!=week->head)
        p=p->link;
    p->link=NULL;
    
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
    do {
        if (strcmp(temp->data, x)==0) return temp;
        temp=temp->link;
    } while (temp !=week->head); // 같은 값 찾기
}

// 삭제
void delete(startNode* week, listNode* p) {
    listNode* temp;
    if (week->head==NULL) return; // 시작 리스트가 공백 리스트일 경우 종료
    /* 노드가 하나인 경우는 제외
    이유: 이미 데이터 입력을 월 수 금을 했음, 게다가 삭제 노드가 마지막 노드여서
          세그폴트(Segmentation Fault)가 일어날 이유가 없음*/
    else if (p==NULL) return; // 삭제할 노드가 없음
    else {
        temp=week->head;
        if (p==week->head) { // 첫 번째 노드 일 경우
            week->head=p->link;
            while (temp->link!=week->head)
                temp=temp->link;
            temp->link=week->head;
            free(p);
            return;
        }
        while (temp->link!=p)
            temp=temp->link;
        temp->link=p->link;
        free(p);
    }
}