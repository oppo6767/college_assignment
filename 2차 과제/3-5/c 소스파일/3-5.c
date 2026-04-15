#include "3-5.h"

int main() {
    Matrix arr_a[] = {{8,7,10}, {0,2,2}, {0,6,12}, {1,4,7}, {2,0,23},
                  {3,3,31}, {4,1,14}, {4,5,25}, {5,6,6}, {6,0,52}, {7,4,11}};
    Matrix arr_b[(sizeof(arr_a)/sizeof(int))/3];

    int size=sizeof(arr_a)/sizeof(int);
    print(arr_a, size/3);
    
    Sparse_Matrix(arr_a, arr_b, size/3);
    print(arr_b, size/3);
    
    return 0;
}