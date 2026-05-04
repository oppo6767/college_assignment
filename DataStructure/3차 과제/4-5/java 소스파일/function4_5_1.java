public class function4_5_1 {
    public static void print_func(StartNode PL, int num) {
        if (num==1) System.out.print("A(x)= ");
        else if (num==2) System.out.print("B(x)= ");
        else System.out.print("B(x)= ");

        ListNode4_5 p=PL.head;
        while (p!=null) {
            System.out.print(p.coef + "x^" + p.expo);
            if (p.link!=null) System.out.print(" + ");
            p=p.link;
        }
        System.out.println();
    }

    public static void add(StartNode a, StartNode b, StartNode c) {
        ListNode4_5 PL_a=a.head;
        ListNode4_5 PL_b=b.head;
        while (PL_a!=null&&PL_b!=null) {
            if (PL_a.expo>PL_b.expo) {
                function4_5.insertNode(c, PL_a.coef, PL_a.expo);
                PL_a=PL_a.link;
            } else if (PL_a.expo==PL_b.expo) {
                int coef_c=PL_a.coef+PL_b.coef;
                function4_5.insertNode(c, coef_c, PL_a.expo);
                PL_a=PL_a.link;
                PL_b=PL_b.link;
            } else {
                function4_5.insertNode(c, PL_b.coef, PL_b.expo);
                PL_b=PL_b.link;
            }
        }
        while (PL_a!=null) {
            function4_5.insertNode(c, PL_a.coef, PL_a.expo);
            PL_a=PL_a.link;    
        }

        while (PL_b!=null) {
            function4_5.insertNode(c, PL_b.coef, PL_b.expo);
            PL_b=PL_b.link;
        }
    }
}
