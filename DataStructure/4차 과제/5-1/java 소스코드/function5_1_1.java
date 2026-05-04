public class function5_1_1 {

    public static void print_function(int[] stack, boolean value) {
        System.out.print("STACK[");
        for(int i=0; i<=header5_1.top; i++) {
            System.out.print(stack[i] + " ");
        }
        if (value) System.out.println("]");
        else System.out.print("]");
    }

    public static void push(int[] stack, int value) {
        if(function5_1_2.stack_overflow())
            stack[++header5_1.top]=value;
    }

    public static int pop(int[] stack) {
        if(function5_1_2.stack_underflow())
            return stack[header5_1.top--];
        else {
            System.exit(1);
            return 0;
        }
    }
}
