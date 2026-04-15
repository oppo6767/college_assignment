#pragma once
typedef struct listNode {
    char data[4];
    struct listNode* link;
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
void reverse(startNode* week);
// 삽입 함수 정의
void insertFirst(startNode* week, char* x);
void insertMiddle(startNode* week, listNode* p, char* x);
void insertList(startNode* week, char* x);
