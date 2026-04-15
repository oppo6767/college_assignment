public class function5_2_1 {
    public static void print_function(boolean value) {
        Node5_2 temp= Node5_2.stack;

        System.out.print("STACK[");
        while (temp!=null) {
            System.out.print(temp.top + " ");
            temp = temp.next;
        }
        if (value) System.out.print("]");
        else System.out.println("]");
    }

    public static void push(int item) {
        Node5_2 newNode = new Node5_2(item);
        newNode.next = Node5_2.stack;
        Node5_2.stack = newNode;
    }

    public static int pop() {
        if (Node5_2.stack == null) {
            System.out.println("Stack underflow.");
            System.exit(1);
        }
        int value = Node5_2.stack.top;
        Node5_2.stack = Node5_2.stack.next;
        return value;
    }
}
