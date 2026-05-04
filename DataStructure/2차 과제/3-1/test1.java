public class test1 {   
    public static void main(String[] args) {
        int[] sale = {157, 209, 251, 312};
        for(int i=0;i<4;i++) {
            int address = System.identityHashCode(sale[i]);
            System.out.printf("address : %d sale[%d] = %d\n", address, i, sale[i]);
        }
    }
}
