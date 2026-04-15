public class main3_5 {
    public static void main(String[] args) {
        Matrix3_5[] arr_a = {new Matrix3_5(8,7,10),
                             new Matrix3_5(0,2,2),
                             new Matrix3_5(0,6,12),
                             new Matrix3_5(1,4,7),
                             new Matrix3_5(2,0,23),
                             new Matrix3_5(3,3,31),
                             new Matrix3_5(4,1,14),
                             new Matrix3_5(4,5,25),
                             new Matrix3_5(5,6,6),
                             new Matrix3_5(6,0,52),
                             new Matrix3_5(7,4,11)};
        Matrix3_5[] arr_b = new Matrix3_5[arr_a.length];
        for (int i = 0; i < arr_b.length; i++)
            arr_b[i] = new Matrix3_5(0, 0, 0);
        function3_5.print(arr_a, arr_a.length);

        function3_5.Sparse_Matrix(arr_a, arr_b, arr_a.length);
        function3_5.print(arr_b, arr_b.length);
    }
}
