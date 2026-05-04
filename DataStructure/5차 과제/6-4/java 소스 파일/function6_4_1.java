public class function6_4_1 {
    public static void enqueue(boolean value, String item) {
        Node6_4 newNode=new Node6_4(item);
        newNode.link_left=null;
        newNode.link_rigth=null;
        if (Node6_4.rear==null||Node6_4.front==null)
            Node6_4.front=Node6_4.rear=newNode;
        else if (value) {
            Node6_4.front.link_left=newNode;
            newNode.link_rigth=Node6_4.front;
            Node6_4.front=newNode;
        } else {
            Node6_4.rear.link_rigth=newNode;
            newNode.link_left=Node6_4.rear;
            Node6_4.rear=newNode;
        }

        if (value) function6_4_2.print_func(item, Node6_4.printmode.front_en);
        else function6_4_2.print_func(item, Node6_4.printmode.rear_en);
   }
   public static String dequeue(boolean value) {
        String item;
        if (value) {
            Node6_4 temp=Node6_4.front;
            item=Node6_4.front.data;
            Node6_4.front=temp.link_rigth;
            Node6_4.front.link_left=null;
            function6_4_2.print_func(null, Node6_4.printmode.front_de);
        } else {
            Node6_4 temp=Node6_4.rear;
            item=Node6_4.rear.data;
            Node6_4.rear=temp.link_left;
            Node6_4.front.link_rigth=null;
            function6_4_2.print_func(null, Node6_4.printmode.rear_de);
        }
        return item;
   }
}
