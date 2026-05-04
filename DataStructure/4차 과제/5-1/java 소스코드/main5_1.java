public class main5_1 {

    public static void main(String[] args) {

        function5_1_1.push(header5_1.stack, 1);
        function5_1_1.print_function(header5_1.stack, true);
        
        function5_1_1.push(header5_1.stack, 2);
        function5_1_1.print_function(header5_1.stack, true);
        
        function5_1_1.push(header5_1.stack, 3);
        function5_1_1.print_function(header5_1.stack, true);

        int peek=header5_1.stack[header5_1.top];
        function5_1_1.print_function(header5_1.stack, false);
        System.out.println("\tpeek=>" + peek);

        int pop_value=function5_1_1.pop(header5_1.stack);
        function5_1_1.print_function(header5_1.stack, false);
        System.out.println("\tpop=>" + pop_value);

        pop_value=function5_1_1.pop(header5_1.stack);
        function5_1_1.print_function(header5_1.stack, false);
        System.out.println("\tpop=>" + pop_value);

        pop_value=function5_1_1.pop(header5_1.stack);
        function5_1_1.print_function(header5_1.stack, false);
        System.out.println("\t\tpop=>" + pop_value);
    }
}
