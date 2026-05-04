public class function6_3_1 {
    public static void enqueue(String item) {
        Node6_3 newNode=new Node6_3(item);
        newNode.link=null;
        if (Node6_3.rear==null)
            Node6_3.front=Node6_3.rear=newNode;
        else {
            Node6_3.rear.link=newNode;
            Node6_3.rear=newNode;
        }
        function6_3_2.print_func(item, true);
   }
   public static String dequeue() {
        if(function6_3_2.queue_empty()) return null;

        Node6_3 temp=Node6_3.front;
        String item=temp.data;
        Node6_3.front=Node6_3.front.link;
        if (Node6_3.front==null) Node6_3.rear=null;
        temp.link=null;
        function6_3_2.print_func(null, false);
        return item;
   }
}
