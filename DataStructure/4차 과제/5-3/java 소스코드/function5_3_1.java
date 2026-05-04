public class function5_3_1 {
    public static void push(char data) {
        Node5_3 newNode = new Node5_3(data);
        newNode.next = Node5_3.stack;
        Node5_3.stack = newNode;
    }

    public static void pop() {
        if (Node5_3.stack == null) {
            System.out.println("stack underflows");
            System.exit(0);
        }
        Node5_3 temp = Node5_3.stack;
        Node5_3.stack = Node5_3.stack.next;
        temp.next = null;
    }
}
