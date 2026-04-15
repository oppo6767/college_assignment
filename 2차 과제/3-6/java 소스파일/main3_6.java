public class main3_6 {
    public static void main(String[] args) {
        polynomial3_6 a = new polynomial3_6(3, new int[]{4, 3, 5, 0});
        polynomial3_6 b = new polynomial3_6(4, new int[]{3, 1, 0, 2, 1});
        polynomial3_6 c = new polynomial3_6(0, new int[10]);
        
        function3_6.addpoly(a, b, c);
        System.out.print("A(x)= ");
        function3_6.print_func(a);

        System.out.print("B(x)= ");
        function3_6.print_func(b);

        System.out.print("C(x)= ");
        function3_6.print_func(c);
    }
}
