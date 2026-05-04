public class main5_2 {

    public static void main(String[] args) {
        System.out.println("**연결 스택 연산**\n");
        function5_2_1.print_function(false);
        
        function5_2_1.push(1);
        function5_2_1.print_function(false);
                
        function5_2_1.push(2);
        function5_2_1.print_function(false);
                
        function5_2_1.push(3);
        function5_2_1.print_function(false);

        function5_2_1.print_function(true);
        System.out.println("\tpeek=>" + Node5_2.stack.top);

        int value=function5_2_1.pop();
        function5_2_1.print_function(true);
        System.out.println("\tpop=>" + value);
                                
        value=function5_2_1.pop();
        function5_2_1.print_function(true);
        System.out.println("\tpop=>" + value);
                                
        value=function5_2_1.pop();
        function5_2_1.print_function(true);
        System.out.println("\t\tpop=>" + value);
    }
}
