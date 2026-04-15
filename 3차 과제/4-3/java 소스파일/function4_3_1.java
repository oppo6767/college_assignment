public class function4_3_1 {
    public static void print_func(StartNode week) {
        if (week.head==null) {
            System.out.println("CL=()\n");
            return;
        }

        ListNode4_3 p=week.head;
        System.out.print("L=(");
        do {
            System.out.print(p.data);
            p=p.link;
            if (p!=week.head) System.out.print(", ");
        } while (p!=week.head);
        System.out.println(")\n");
    }

    public static ListNode4_3 search(StartNode week, String x) {
        ListNode4_3 temp = week.head;
        do {
            if (temp.data.equals(x)) return temp;
            temp=temp.link;
        } while (temp!=week.head);
        return null;
    }

    public static void delete(StartNode week, ListNode4_3 p) {
        ListNode4_3 temp=week.head;
        while (temp.link!=p)
            temp=temp.link;
        temp.link=p.link;
    }
}
