#include <stdio.h>
#include "4-4.h"

int main() {
    startNode* week = Empty_limked_link(); // 공백 리스트 만들기(시작 리스트)
    listNode* p;
    printf("(1)이중 연결 리스트 생성하기!\n");
    print(week);

    printf("(2) 이중 연결 리스트에 [월]노드 삽입하기!\n");
    insertNode(week, "월");
    print(week);

    printf("(3)이중 연결 리스트의 [월]노드 뒤에 [수]노드 삽입하기!\n");
    insertNode(week, "수");
    print(week);

    printf("(4) 이중 연결 리스트에서 [수]노드 뒤에 [금] 노드 삽입하기!\n");
    insertNode(week, "금");
    print(week);

    printf("(5) 이중 연결 리스트에서 [수]노드 삭제하기!\n");
    p=search(week, "수");
    delete(week, p);
    print(week);

    limked_link_Free(week);

    return 0;
}