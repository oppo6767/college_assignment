#pragma once
typedef struct listNode {
    struct listNode* Llink;
    int coef;
    int expo;
    struct listNode* Rlink;
} listNode;

typedef struct {
    listNode* head;
} startNode;

// 공백 리스트 함수 정의
startNode* Empty_limked_link(void);
// 출력, 해제함수 정의
void print(startNode* PL, int num);
void limked_link_Free(startNode* PL);
// 삽입 함수 정의
void insertNode(startNode* PL, int coef, int expo);
void add(startNode* a, startNode* b, startNode* c);
