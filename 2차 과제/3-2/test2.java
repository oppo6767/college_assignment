public class test2 {
    public static void main(String[] args) {
        int count = 0;
        int[][] sale = {{63, 84, 140, 130}, {157, 209, 251, 312}};
        for(int dex1=0;dex1<2;dex1++)
            for(int dex2=0;dex2<4;dex2++) {
                int address = System.identityHashCode(sale[dex1][dex2]);
                System.out.printf("address : %d sale[%d] = %d\n", address, count++, sale[dex1][dex2]);
            }
    }
}
