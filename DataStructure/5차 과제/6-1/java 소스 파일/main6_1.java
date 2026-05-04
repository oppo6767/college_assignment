public class main6_1 {
    public static void main(String[] args) {
        System.out.println("*****순차 큐 연산*****");
        function6_1_1.enqueue("A");
        System.out.println();
        function6_1_1.enqueue("B");
        System.out.println();
        function6_1_1.enqueue("C");
        System.out.println("peek item:"+header6_1.queue[header6_1.front+1]+"\n");

        String item=function6_1_1.dequeue();
        System.out.println("\t삭제 데이터: "+item);
        item=function6_1_1.dequeue();
        System.out.println("\t삭제 데이터: "+item);
        item=function6_1_1.dequeue();
        System.out.println("\t\t삭제 데이터: "+item);
        function6_1_1.enqueue("D");
        System.out.println();
        function6_1_1.enqueue("E");
    }
}
