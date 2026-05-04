#pragma once
typedef struct {
    int row;
    int col;
    int value;
} Matrix;

void print(Matrix* arr, int size);
void Sparse_Matrix(Matrix* arr_a, Matrix* arr_b, int size);