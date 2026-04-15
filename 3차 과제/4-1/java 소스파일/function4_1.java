public class function4_1 {
    public static void print_func(StartNode week) {
        ListNode4_1 p=week.head;
        System.out.print("L=(");
        while (p!=null) {
            System.out.print(p.data);
            p=p.link;
            if (p!=null) System.out.print(", ");
        }
        System.out.println(")\n");
    }

    public static void insertfirst(StartNode week, String x) {
        ListNode4_1 newNode = new ListNode4_1(x.toCharArray());
        newNode.link=week.head;
        week.head=newNode;
    }

    public static void insertLast(StartNode week, String x) {
        ListNode4_1 newNode = new ListNode4_1(x.toCharArray());
        newNode.link=null;

        if (week.head==null) {
            week.head=newNode;
            return;
        }

        ListNode4_1 temp=week.head;
        while (temp.link!=null)
            temp=temp.link;
        temp.link=newNode;
    }

    public static void limked_link_Free(StartNode week) {
        week.head=null; // <- 이 줄 전체 변경
    }
}
