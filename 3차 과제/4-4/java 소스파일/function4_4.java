public class function4_4 {
    public static void insertNode(StartNode week, String x) {
        ListNode4_4 newNode = new ListNode4_4(x);
        newNode.Rlink=null;

        if (week.head==null) {
            week.head=newNode;
            newNode.Llink=null;
            return;
        }

        ListNode4_4 temp=week.head;
        while (temp.Rlink!=null)
            temp=temp.Rlink;
        temp.Rlink=newNode;
        newNode.Llink=temp;
    }
}
