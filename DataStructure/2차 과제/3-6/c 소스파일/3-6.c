#include <stdio.h>
#include "3-6.h"

int main() {
    polynomial a={3, {4, 3, 5, 0}};
    polynomial b={4, {3, 1, 0, 2, 1}};
    polynomial c;
    
    addpoly(a, b, &c);
    printf("A(x)= ");
    print(a);

    printf("B(x)= ");
    print(b);

    printf("C(x)= ");
    print(c);

    return 0;
}