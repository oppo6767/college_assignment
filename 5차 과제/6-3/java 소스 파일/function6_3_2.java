public class function6_3_2 {
    public static boolean queue_empty() {
        if (Node6_3.front==null) {
            System.out.println("queue is empty");
            return true;
        }
        return false;
    }
    
    public static void print_func(String item, boolean value) {
        Node6_3 temp=Node6_3.front;
        if (value) System.out.print("삽입"+item+">> Queue:[");
        else System.out.print("삭제>> Queue:[");
        while (temp!=null) {
            System.out.print(temp.data+" ");
            temp=temp.link;
        }
        System.out.print("]");
    }
}
