#include <stdio.h>
#include "3-6.h"

void addpoly(polynomial a, polynomial b, polynomial* c) {
    int a_degree = a.Highest_Degree;
    int b_degree = b.Highest_Degree;
    c->Highest_Degree = a_degree > b_degree ? a_degree : b_degree;
    int a_index=0;
    int b_index=0;
    int c_index=0;

    while (a_degree>=0 && b_degree>=0) {
        if (a_degree > b_degree) {
            c->coefficient[c_index++] = a.coefficient[a_index++];
            a_degree--;
        } else if (a_degree == b_degree) {
            c->coefficient[c_index++] = a.coefficient[a_index++] + b.coefficient[b_index++];
            a_degree--;
            b_degree--;
        } else {
            c->coefficient[c_index++] = b.coefficient[b_index++];
            b_degree--;
        }
    }
}

void print(polynomial var) {
    int var_degree=var.Highest_Degree;
    for (int i = 0; i <= var.Highest_Degree ; i++) {
        printf("%dx^%d ", var.coefficient[i], var_degree--);
        if(i < var.Highest_Degree) printf("+ ");
    }
    printf("\n");
}