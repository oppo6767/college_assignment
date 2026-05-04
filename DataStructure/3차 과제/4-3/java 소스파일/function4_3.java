public class function4_3 {
    public static void insertNode(StartNode week, String x) {
        ListNode4_3 newNode = new ListNode4_3(x);
        newNode.link=null;

        if (week.head==null) {
            week.head=newNode;
            newNode.link=week.head;
            return;
        }

        ListNode4_3 temp=week.head;
        while (temp.link!=week.head)
            temp=temp.link;
        temp.link=newNode;
        newNode.link=week.head;
    }
}
