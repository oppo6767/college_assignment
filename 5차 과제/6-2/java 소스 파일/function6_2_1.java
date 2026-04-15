public class function6_2_1 {
    public static void enqueue(String item) {
        if(function6_2_2.queue_full()) {
            function6_2_2.print_func(header6_2.queue, item, true);
            return;
        }
        header6_2.queue[(++header6_2.rear)%header6_2.size]=item;
        function6_2_2.print_func(header6_2.queue, item, true);
   }
   public static String dequeue() {
        if(function6_2_2.queue_empty()) return null;
        String item=header6_2.queue[(++header6_2.front)%header6_2.size];
        function6_2_2.print_func(header6_2.queue, null, false);
        return item;
   }
}
