#include <stdio.h>
#include "4-5.h"

int main() {
    startNode* a = Empty_limked_link(); // 공백 리스트 만들기(시작 리스트)
    startNode* b = Empty_limked_link();
    startNode* c = Empty_limked_link();
    int coefa[]={4, 3, 5};
    int expoa[]={3, 2, 1};
    for (int i = 0; i < 3; i++)
        insertNode(a, coefa[i], expoa[i]);

    int coefb[]={3, 1, 2, 1};
    int expob[]={4, 3, 1, 0};
    for (int i = 0; i < 4; i++)
        insertNode(b, coefb[i], expob[i]);
    
    add(a, b, c);
    print(a, 1);
    print(b, 2);
    print(c, 3);

    limked_link_Free(a);
    limked_link_Free(b);
    limked_link_Free(c);

    return 0;
}