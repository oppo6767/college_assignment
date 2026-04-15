public class main6_2 {
    public static void main(String[] args) {
        System.out.println("*****원형 큐 연산*****");
        function6_2_1.enqueue("A");
        System.out.println();
        function6_2_1.enqueue("B");
        System.out.println();
        function6_2_1.enqueue("C");
        System.out.println("peek item:"+header6_2.queue[(header6_2.front+1)%header6_2.size]+"\n");

        String item=function6_2_1.dequeue();
        System.out.println("\t삭제 데이터: "+item);
        item=function6_2_1.dequeue();
        System.out.println("\t삭제 데이터: "+item);
        item=function6_2_1.dequeue();
        System.out.println("\t\t삭제 데이터: "+item);
        function6_2_1.enqueue("D");
        System.out.println();
        function6_2_1.enqueue("E");
    }
}
