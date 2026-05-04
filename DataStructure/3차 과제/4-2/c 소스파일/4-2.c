#include <stdio.h>
#include "4-2.h"

int main() {
    startNode* week = Empty_limked_link(); // 공백 리스트 만들기(시작 리스트)
    listNode* p;
    printf("(1)리스트에 [월], [수], [일]노드 삽입하기!\n");
    insertFirst(week, "수");
    insertList(week, "일");
    insertFirst(week, "월");
    print(week);

    printf("(2) 리스트에서 [수]노드 탐색하기!\n");
    p=search(week, "수");
    if (p==NULL) printf("찾는 데이터가 없습니다.\n");
    else printf("[%s]를 찾았습니다.\n\n", p->data);

    printf("(3) 리스트에 [수]노드 뒤에 [금]노드 삽입하기!\n");
    insertMiddle(week, p, "금");
    print(week);

    printf("(4) 리스트에서 [일]노드 삭제하기!\n");
    p=search(week, "일");
    delete(week, p);
    print(week);

    printf("(5) 리스트의 순서를 역순으로 바꾸기!\n");
    reverse(week);

    return 0;
}