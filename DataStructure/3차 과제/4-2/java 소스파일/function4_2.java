public class function4_2 {
    public static void insertfirst(StartNode week, String x) {
        ListNode4_2 newNode = new ListNode4_2(x);
        newNode.link=week.head;
        week.head=newNode;
    }

    public static void insertMiddle(StartNode week, ListNode4_2 p, String x) {
        ListNode4_2 newNode = new ListNode4_2(x);
        if (week.head==null) {
            newNode.link=null;
            week.head=newNode;
        } else if (p==null) {
            newNode.link=week.head;
            week.head=newNode;
        } else {
            newNode.link=p.link;
            p.link=newNode;
        }
    }

    public static void insertLast(StartNode week, String x) {
        ListNode4_2 newNode = new ListNode4_2(x);
        newNode.link=null;

        if (week.head==null) {
            week.head=newNode;
            return;
        }

        ListNode4_2 temp=week.head;
        while (temp.link!=null)
            temp=temp.link;
        temp.link=newNode;
    }

    public static void limked_link_Free(StartNode week) {
        week.head=null;
    }
}
