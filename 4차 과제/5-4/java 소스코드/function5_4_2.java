public class function5_4_2 {
    public static int calculate(char operator) {
        int value_result = 0;
        int value1 = Node5_4.stack.top;
        int value2 = Node5_4.stack.next.top;
        Node5_4.stack = Node5_4.stack.next.next;
        switch (operator) {
            case '*':
                value_result = (value2) * (value1);
                function5_4_1.push(value_result);
                break;
            case '/':
                value_result = (value2) / (value1);
                function5_4_1.push(value_result);
                break;
            case '-':
                value_result = (value2) - (value1);
                function5_4_1.push(value_result);
                break;
        }
        return value_result;
    }
}
