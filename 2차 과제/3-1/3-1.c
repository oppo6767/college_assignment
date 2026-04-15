#include <stdio.h>

int main() {
    int sale[4]={157, 209, 251, 312};
    for(int i=0;i<4;i++)
        printf("address:%u sale[%d]= %d\n", &(sale[i]), i, sale[i]);
    
    return 0;
}