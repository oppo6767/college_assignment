public class main5_4 {
    public static void main(String[] args) {
        int value = 0;
        String expression="35*62/-";
        for(int i=0;i<expression.length();i++)
            switch (expression.charAt(i)) {
                case '*':
                case '/':
                case '-':
                    value=function5_4_1.pop(expression.charAt(i));
                    break;
                default:
                    function5_4_1.push(expression.charAt(i)-'0');
                    break;
            }
        System.out.println("후위 표기식:" + expression);
        System.out.println("연산 결과=> " + value);
    }
}
