public class function6_1_2 {
   public static boolean queue_full() {
        if (header6_1.rear==header6_1.size-1) {
            System.out.println("queue is full");
            return true;
        }
        return false;
    }
    public static boolean queue_empty() {
        if (header6_1.rear==header6_1.front) {
            System.out.println("queue is empty");
            return true;
        }
        return false;
    }
    
    public static void print_func(String[] queue, String item, boolean value) {
        if (value) System.out.print("삽입"+item+">> Queue:[");
        else System.out.print("삭제>> Queue:[");
        for(int i=header6_1.front+1;i<=header6_1.rear;i++)
            System.out.print(queue[i]+" ");
        System.out.print("]");
    }
}
