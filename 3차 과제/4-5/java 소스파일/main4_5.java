public class main4_5 {
    public static void main(String[] args) {
        StartNode a = new StartNode(); //공백 리스트 생성
        StartNode b = new StartNode();
        StartNode c = new StartNode();
        int[] coefa={4, 3, 5};
        int[] expoa={3, 2, 1};
        for (int i=0;i<3;i++)
            function4_5.insertNode(a, coefa[i], expoa[i]);

        int[] coefb={3, 1, 2, 1};
        int[] expob={4, 3, 1, 0};
        for (int i=0;i<4;i++)
            function4_5.insertNode(b, coefb[i], expob[i ]);

        function4_5_1.add(a, b, c);
        function4_5_1.print_func(a, 1);
        function4_5_1.print_func(b, 2);
        function4_5_1.print_func(c, 3);

        a.head=null; // java 연결 리스트 해제
        b.head=null;
        c.head=null;
    }
}
