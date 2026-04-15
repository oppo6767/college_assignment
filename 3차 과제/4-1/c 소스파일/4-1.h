#pragma once
typedef struct listNode {
    char date[4];
    struct listNode* link;
} listNode;

typedef struct {
    listNode* head;
} startNode;

startNode* Empty_limked_link(void);
void print(startNode* week);
void limked_link_Free(startNode* week);
void insertFirst(startNode* week, char* x);
void insertList(startNode* week, char* x);
