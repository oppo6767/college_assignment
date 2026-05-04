public class function5_4_1 {
    public static void push(int data) {
        Node5_4 newNode = new Node5_4(data);
        newNode.next = Node5_4.stack;
        Node5_4.stack = newNode;
    }

    public static int pop(char operator) {
        if (Node5_4.stack == null) {
            System.out.println("stack underflow");
            System.exit(1);
        }
        return function5_4_2.calculate(operator);
    }
}
