public class function4_4_1 {
    public static void print_func(StartNode week) {
        ListNode4_4 p=week.head;
        System.out.print("DL=(");
        while (p!=null) {
            System.out.print(p.data);
            if (p.Rlink!=null) System.out.print(", ");
            p=p.Rlink;
        }
        System.out.println(")\n");
    }

    public static ListNode4_4 search(StartNode week, String x) {
        ListNode4_4 temp = week.head;
        while (temp!=null) {
            if (temp.data.equals(x)) return temp;
            temp=temp.Rlink;
        }
        return null;
    }

    public static void delete(StartNode week, ListNode4_4 p) {
        ListNode4_4 temp=week.head;
        while (temp.Rlink!=p)
            temp=temp.Rlink;
        temp.Rlink=p.Rlink;
        p.Rlink.Llink=temp;
        p.Rlink=null;
        p.Llink=null;
    }
}
