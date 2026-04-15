#include <stdio.h>
#include "4-1.h"

int main() {
    startNode* week;
    listNode* p;
    week = Empty_limked_link();
    printf("(1)공백 리스트 생성하기!\n");
    print(week);

    printf("(2) 리스트에 [수]노드 삽입하기!\n");
    insertFirst(week, "수");
    print(week);

    printf("(3) 리스트에 마지막에 [금]노드 삽입하기!\n");
    insertList(week, "금");
    print(week);

    printf("(4) 리스트 첫 번째에 [월]노드 삽입하기!\n");
    insertFirst(week, "월");
    print(week);

    printf("(5) 리스트 공간을 해제하여 공백 리스트로 만들기!\n");
    limked_link_Free(week);
    print(week);

    return 0;
}