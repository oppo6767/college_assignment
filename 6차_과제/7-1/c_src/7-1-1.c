#include <stdio.h>
#include <stdlib.h>
#include "7-1.h"

treeNode* treemake(char data, treeNode* L, treeNode* R) {
    treeNode* newTree=(treeNode*)malloc(sizeof(treeNode));
    newTree->data=data;
    newTree->L=L;
    newTree->R=R;
    return newTree;
}

void preorder(treeNode* node) {
    if(node==NULL) return;
    else {
        printf("%c", node->data);
        preorder(node->L);
        preorder(node->R);
    }
}

void inorder(treeNode* node) {
    if(node==NULL) return;
    else {
        inorder(node->L);
        printf("%c", node->data);
        inorder(node->R);
    }
}

void postorder(treeNode* node) {
    if(node==NULL) return;
    else {
        postorder(node->L);
        postorder(node->R);
        printf("%c", node->data);
    }
}