public class function3_5 {
    public static void print(Matrix3_5[] arr, int len) {
        if (arr[0].row==8) System.out.println("<<희소행렬a>>");
        else System.out.println("<<희소행렬b>>");

        for(int i=0;i<len;i++)
            System.out.printf("[%d, %d, %d]\n", arr[i].row, arr[i].col, arr[i].value);
        System.out.println();
    }

    public static void Sparse_Matrix(Matrix3_5[] arr_a, Matrix3_5[] arr_b, int len) {
        arr_b[0].row = arr_a[0].col;
        arr_b[0].col = arr_a[0].row;
        arr_b[0].value = arr_a[0].value;

        int index=1;
        for(int col=0;col<10;col++)
            for(int i=1;i<len;i++)
                if (arr_a[i].col==col) {
                    arr_b[index].row = arr_a[i].col;
                    arr_b[index].col = arr_a[i].row;
                    arr_b[index].value = arr_a[i].value;    
                    index++;
                }
    }
}
