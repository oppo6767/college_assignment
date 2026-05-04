public class test3 {
    public static void main(String[] args) {
        int count = 0;
        int[][][] sale = {{{63, 84, 140, 130}, {157, 209, 251, 312}},
                            {{59, 80, 130, 135}, {149, 187, 239, 310}}};
        for(int dex1=0;dex1<2;dex1++)
            for(int dex2=0;dex2<2;dex2++)
                for(int dex3=0;dex3<4;dex3++) {
                    int address = System.identityHashCode(sale[dex1][dex2][dex3]);
                    System.out.printf("address : %d sale[%d] = %d\n", address, count++, sale[dex1][dex2][dex3]);
                }
    }
}
