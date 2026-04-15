#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "4-4.h"

// 출력
void print(startNode* week) {
    listNode* p=week->head;
    printf("DL=(");
    while (p!=NULL) {
        printf("%s", p->data);
        p=p->Rlink;
        if (p!=NULL) printf(", ");
    }
    printf(")\n\n");
}

// 연결 리스트의 전체 메모리 해제
void limked_link_Free(startNode* week) {
    listNode* p=week->head;
    while (week->head!=NULL) {
        p=week->head;
        week->head=week->head->Rlink; // 시작 리스트에 다음 노드 주소를 저장
        if (week->head!=NULL) // <-if문 추가 세크폴트 문제
            week->head->Llink=NULL;
        free(p); //수정: 밑에줄 없앰
    }
}

// 탐색
listNode* search(startNode* week, char* x) {
    listNode* temp = week->head;
    while (temp!=NULL) { // 같은 값 찾기
        if (strcmp(temp->data, x)==0) return temp;
        temp=temp->Rlink;
    }
}

// 삭제
void delete(startNode* week, listNode* p) {
    listNode* temp=week->head;
    if (week->head==NULL) return; // 시작 리스트가 공백 리스트일 경우 종료
    else if (p==NULL) return; // 삭제할 노드가 없음
    else {
        while (temp->Rlink!=p) temp=temp->Rlink;
        temp->Rlink=p->Rlink;
        temp->Rlink->Llink=temp;
        free(p);
    }
}