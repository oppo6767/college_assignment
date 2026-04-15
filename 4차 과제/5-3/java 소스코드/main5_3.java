public class main5_3 {
    public static void main(String[] args) {
        String expression="{(A+B)-3}*+5[{cos(x+y)+7}-1]*4";
        for(int i=0;i<expression.length();i++)
            switch (expression.charAt(i)) {
                case '{':
                case '[':
                case '(':
                    function5_3_1.push(expression.charAt(i));
                    break;
                case '}':
                case ']':
                case ')':
                    function5_3_1.pop();
                    break;
            }
        System.out.println(expression);
        if (Node5_3.stack == null)
            System.out.println("수식의 괄호가 맞게 사용되었습니다!");
    }
}
