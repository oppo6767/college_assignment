#include <stdio.h>
#include "7-1.h"

int main() {
    treeNode* node7 = treemake('A', NULL, NULL);
    treeNode* node6 = treemake('B', NULL, NULL);
    treeNode* node5 = treemake('C', NULL, NULL);
    treeNode* node4 = treemake('D', NULL, NULL);
    treeNode* node3 = treemake('*', node7, node6);
    treeNode* node2 = treemake('/', node5, node4);
    treeNode* node1 = treemake('-', node3, node2);

    preorder(node1);
    printf("\n");
    
    inorder(node1);
    printf("\n");
    
    postorder(node1);
    printf("\n");

    return 0;
}