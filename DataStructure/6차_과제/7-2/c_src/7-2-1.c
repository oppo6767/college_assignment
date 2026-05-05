#include <stdlib.h>
#include "7-2.h"

treeNode* fileData(int data, treeNode* L, treeNode* R) {
    treeNode* newNode = (treeNode*)malloc(sizeof(treeNode));
    newNode->data=data;
    newNode->L=L;
    newNode->R=R;
    return newNode;
}

void Datasum(treeNode* node) {
    if(node==NULL) return;
    Datasum(node->L);
    Datasum(node->R);
    if(node->L!=NULL) node->data+=node->L->data;
    else node->data+=0;

    if(node->R!=NULL) node->data+=node->R->data;
    else node->data+=0;
}