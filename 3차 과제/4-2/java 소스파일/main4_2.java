public class main4_2 {
    public static void main(String[] args) {
        StartNode week = new StartNode(); //공백 리스트 생성
        System.out.println("(1)리스트에 [월], [수], [일]노드 삽입하기!");
        function4_2.insertfirst(week, "월");
        function4_2.insertLast(week, "수");
        function4_2.insertLast(week, "일");
        function4_2_1.print_func(week);

        System.out.println("(2) 리스트에서 [수]노드 탐색하기!");
        ListNode4_2 p=function4_2_1.search(week, "수");
        System.out.println("["+p.data+"]를 찾았습니다.\n");

        System.out.println("(3) 리스트에 [수]노드 뒤에 [금]노드 삽입하기!");
        function4_2.insertMiddle(week, p, "금");
        function4_2_1.print_func(week);

        System.out.println("(4) 리스트에서 [일]노드 삭제하기!");
        p=function4_2_1.search(week, "일");
        function4_2_1.delete(week, p);
        function4_2_1.print_func(week);

        System.out.println("(5) 리스트의 순서를 역순으로 바꾸기!");
        function4_2_1.reverse_print(week);

        function4_2.limked_link_Free(week);
    }
}
