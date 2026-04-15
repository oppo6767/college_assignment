public class function3_6 {
    public static void addpoly(polynomial3_6 a, polynomial3_6 b, polynomial3_6 c) {
        int a_degree = a.Degree;
        int b_degree = b.Degree;
        c.Degree = a_degree > b_degree ? a_degree : b_degree;
        int a_index=0;
        int b_index=0;
        int c_index=0;

        while (a_degree>=0&&b_degree>=0) {
            if (a_degree>b_degree) {
                c.coef[c_index++]=a.coef[a_index++];
                a_degree--;
            } else if (a_degree==b_degree) {
                c.coef[c_index++]=a.coef[a_index++]+b.coef[b_index++];
                a_degree--;
                b_degree--;
            } else {
                c.coef[c_index++]=b.coef[b_index++];
                b_degree--;
            }
        }
    }

    public static void print_func(polynomial3_6 var) {
        int var_degree=var.Degree;
        for(int i=0;i<=var.Degree;i++) {
            System.out.print(var.coef[i] + "x^" + var_degree--);
            if (i<var.Degree) System.out.print(" + ");
        }
        System.out.println();
    }
}
