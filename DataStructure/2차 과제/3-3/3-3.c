#include <stdio.h>

int main() {
    int num=0;
    int sale[2][2][4]={{{63, 84, 140, 130}, {157, 209, 251, 312}},
                        {{59, 80, 130, 135}, {149, 187, 239, 310}}};

    for(int dex_1 = 0 ; dex_1 < 2 ; dex_1++)
        for (int dex_2 = 0 ; dex_2 < 2 ; dex_2++)
            for (int dex_3 = 0; dex_3 < 4; dex_3++) {
                printf("address: %u sale %d = %d\n", &(sale[dex_1][dex_2][dex_3]), num, sale[dex_1][dex_2][dex_3]);
                num++;
            }
            

    return 0;
}