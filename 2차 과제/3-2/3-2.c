#include <stdio.h>

int main() {
    int num=0;
    int sale[2][4]={{63, 84, 140, 130}, {157, 209, 251, 312}};

    for(int dex_1 = 0 ; dex_1 < 2 ; dex_1++)
        for (int dex_2 = 0 ; dex_2 < 4 ; dex_2++) {
            printf("address: %u sale %d = %d\n", &(sale[dex_1][dex_2]), num, sale[dex_1][dex_2]);
            num++;
        }

    return 0;
}