#include <stdio.h>
#include "3-5.h"

void print(Matrix* arr, int size) {
    if (arr[0].row==8) printf("<<희소행렬a>>\n");
    else printf("<<희소행렬b>>\n");
    
    for (int i = 0; i < size; i++) 
        printf("[%d, %d, %d]\n", arr[i].row, arr[i].col, arr[i].value);
    printf("\n");
}

void Sparse_Matrix(Matrix* arr_a, Matrix* arr_b, int size) {
    arr_b[0].row = arr_a[0].col;
    arr_b[0].col = arr_a[0].row;
    arr_b[0].value = arr_a[0].value;

    int count=0;
    int index=1;
    for (int col = 0; col < 10; col++)
        for (int i = 1; i <= 10; i++)
            if (arr_a[i].col==col) {
                arr_b[index].row = arr_a[i].col;
                arr_b[index].col = arr_a[i].row;
                arr_b[index].value = arr_a[i].value;    
                index++;
            }
}