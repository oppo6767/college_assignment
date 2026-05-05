#pragma once

typedef struct treeNode {
    int data;
    struct treeNode* L;
    struct treeNode* R;
} treeNode;

treeNode* fileData(int data, treeNode* L, treeNode* R);
void Datasum(treeNode* node);
