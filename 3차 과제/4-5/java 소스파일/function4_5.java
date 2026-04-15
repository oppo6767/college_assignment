public class function4_5 {
    public static void insertNode(StartNode PL, int coef_data, int expo_data) {
        ListNode4_5 newNode = new ListNode4_5(coef_data, expo_data);
        newNode.link=null;

        if (PL.head==null) {
            PL.head=newNode;
            return;
        }

        ListNode4_5 temp=PL.head;
        while (temp.link!=null)
            temp=temp.link;
        temp.link=newNode;
    }
}
