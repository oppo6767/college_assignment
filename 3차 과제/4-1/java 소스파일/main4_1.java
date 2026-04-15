public class main4_1 {
    public static void main(String[] args) {
        StartNode week = new StartNode(); //공백 리스트 생성
        System.out.println("(1)공백 리스트 생성하기!");
        function4_1.print_func(week);

        System.out.println("(2) 리스트에 [수]노드 삽입하기!");
        function4_1.insertfirst(week, "수");
        function4_1.print_func(week);

        System.out.println("(2) 리스트의 마지막에 [금]노드 삽입하기!");
        function4_1.insertLast(week, "금");
        function4_1.print_func(week);

        System.out.println("(2) 리스트에 첫 번째에 [월]노드 삽입하기!");
        function4_1.insertfirst(week, "월");
        function4_1.print_func(week);

        System.out.println("(5) 리스트 공간을 해제하여 공백 리스트로 만들기!");
        function4_1.limked_link_Free(week);
        function4_1.print_func(week);
    }
}
