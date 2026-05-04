public class function6_1_1 {
    public static void enqueue(String item) {
        if(function6_1_2.queue_full()) {
            function6_1_2.print_func(header6_1.queue, item, true);
            return;
        }
        header6_1.queue[++header6_1.rear]=item;
        function6_1_2.print_func(header6_1.queue, item, true);
   }
   public static String dequeue() {
        if(function6_1_2.queue_empty()) return null;
        String item=header6_1.queue[++header6_1.front];
        function6_1_2.print_func(header6_1.queue, null, false);
        return item;
   }
}
