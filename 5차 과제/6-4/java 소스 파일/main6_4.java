public class main6_4 {
    public static void main(String[] args) {
        System.out.println("*****데크 연산*****");
        function6_4_1.enqueue(true, "A");
        System.out.println();
        function6_4_1.enqueue(true, "B");
        System.out.println();
        function6_4_1.enqueue(false, "C");
        System.out.println();

        String item=function6_4_1.dequeue(true);
        System.out.println("\t삭제 데이터: "+item);
        item=function6_4_1.dequeue(false);
        System.out.println("\t\t삭제 데이터: "+item);
        function6_4_1.enqueue(false, "D");
        System.out.println();
        function6_4_1.enqueue(true, "E");
        System.out.println();
        function6_4_1.enqueue(true, "F");
        System.out.println();
    }
}
