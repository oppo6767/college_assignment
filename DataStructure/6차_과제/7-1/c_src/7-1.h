#pragma once

typedef struct treeNode {
    char data;
    struct treeNode* L;
    struct treeNode* R;
} treeNode;

treeNode* treemake(char data, treeNode* L, treeNode* R);
void preorder(treeNode* node);
void inorder(treeNode* node);
void postorder(treeNode* node);