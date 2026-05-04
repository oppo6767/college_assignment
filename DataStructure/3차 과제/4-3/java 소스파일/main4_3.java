public class main4_3 {
    public static void main(String[] args) {
        StartNode week = new StartNode(); //공백 리스트 생성
        System.out.println("(1)원형 연결 리스트 생성하기!");
        function4_3_1.print_func(week);

        System.out.println("(2)원형 연결 리스트에 [월]노드 삽입하기!");
        function4_3.insertNode(week, "월");
        function4_3_1.print_func(week);

        System.out.println("(3)원형 연결 리스트에 [월] 노드 뒤에 [수]노드 삽입하기!");
        function4_3.insertNode(week, "수");
        function4_3_1.print_func(week);

        System.out.println("(4)원형 연결 리스트에 [수] 노드 뒤에 [금]노드 삽입하기!");
        function4_3.insertNode(week, "금");
        function4_3_1.print_func(week);

        System.out.println("(5)원형 연결 리스트에서 [수] 노드 삭제하기!");
        ListNode4_3 p=function4_3_1.search(week, "수");
        function4_3_1.delete(week, p);
        function4_3_1.print_func(week);

        week.head=null; // java 연결 리스트 해제
    }
}
