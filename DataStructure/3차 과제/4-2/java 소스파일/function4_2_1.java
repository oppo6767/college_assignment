import java.util.ArrayList;

public class function4_2_1 {
    public static void print_func(StartNode week) {
        ListNode4_2 p=week.head;
        System.out.print("L=(");
        while (p!=null) {
            System.out.print(p.data);
            p=p.link;
            if (p!=null) System.out.print(", ");
        }
        System.out.println(")\n");
    }

    public static ListNode4_2 search(StartNode week, String x) {
        ListNode4_2 temp = week.head;
        while (temp!=null&&!temp.data.equals(x))
            temp=temp.link;
        return temp;
    }

    public static void delete(StartNode week, ListNode4_2 p) {
        ListNode4_2 temp=week.head;
        while (temp.link!=p)
            temp=temp.link;
        temp.link=p.link;
    }

    public static void reverse_print(StartNode week) {
        ArrayList<String> arr = new ArrayList<>();
        ListNode4_2 temp=week.head;

        while (temp!=null) {
            arr.add(temp.data);
            temp=temp.link;
        }

        System.out.print("L=(");
        for (int i=arr.size()-1;i>=0;i--) {
            System.out.print(arr.get(i));
            if (i>0) System.out.print(", ");
        }
        System.out.println(")\n");  
    }
}
