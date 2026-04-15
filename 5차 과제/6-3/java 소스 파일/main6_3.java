public class main6_3 {
    public static void main(String[] args) {
        System.out.println("*****연결 큐 연산*****");
        function6_3_1.enqueue("A");
        System.out.println();
        function6_3_1.enqueue("B");
        System.out.println();
        function6_3_1.enqueue("C");
        System.out.println("peek item:"+Node6_3.front.data+"\n");

        String item=function6_3_1.dequeue();
        System.out.println("\t삭제 데이터: "+item);
        item=function6_3_1.dequeue();
        System.out.println("\t삭제 데이터: "+item);
        item=function6_3_1.dequeue();
        System.out.println("\t\t삭제 데이터: "+item);
        function6_3_1.enqueue("D");
        System.out.println();
        function6_3_1.enqueue("E");
    }
}
