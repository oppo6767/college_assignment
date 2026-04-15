#pragma once
typedef struct listNode {
    struct listNode* Llink;
    char data[4];
    struct listNode* Rlink;
} listNode;

typedef struct {
    listNode* head;
} startNode;

// 공백 리스트 함수 정의
startNode* Empty_limked_link(void);
// 출력 및 탐색, 삭제, 해제, 역순 함수 정의
void print(startNode* week);
void limked_link_Free(startNode* week);
listNode* search(startNode* week, char* x);
void delete(startNode* week, listNode* p);
// 삽입 함수 정의
void insertNode(startNode* week, char* x);
