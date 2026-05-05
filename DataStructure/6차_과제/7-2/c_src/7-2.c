#include <stdio.h>
#include "7-2.h"

int main() {
    treeNode* F11 = fileData(120, NULL, NULL);
    treeNode* F10 = fileData(55, NULL, NULL);
    treeNode* F9 = fileData(100, NULL, NULL);
    treeNode* F8 = fileData(200, NULL, NULL);
    treeNode* F7 = fileData(68, F10, F11);
    treeNode* F6 = fileData(40, NULL, NULL);
    treeNode* F5 = fileData(15, NULL, NULL);
    treeNode* F4 = fileData(2, F8, F9);
    treeNode* F3 = fileData(10, F6, F7);
    treeNode* F2 = fileData(0, F4, F5);
    treeNode* F1 = fileData(0, F2, F3);

    Datasum(F1);

    printf("C:\\의 용량: %d\n", F2->data);
    printf("D:\\의 용량: %d\n", F3->data);
    printf("내 컴퓨터의 전체 용량: %d\n", F1->data);

    return 0;
}