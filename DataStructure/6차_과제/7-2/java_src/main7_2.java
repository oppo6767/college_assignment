public class main7_2 {
    public static void main(String[] args) {
        Node7_2 F11=new Node7_2(120, null, null);
        Node7_2 F10=new Node7_2(55, null, null);
        Node7_2 F9=new Node7_2(100, null, null);
        Node7_2 F8=new Node7_2(200, null, null);
        Node7_2 F7=new Node7_2(68, F10, F11);
        Node7_2 F6=new Node7_2(40, null, null);
        Node7_2 F5=new Node7_2(15, null, null);
        Node7_2 F4=new Node7_2(2, F8, F9);
        Node7_2 F3=new Node7_2(10, F6, F7);
        Node7_2 F2=new Node7_2(0, F4, F5);
        Node7_2 F1=new Node7_2(0, F2, F3);

        function7_2_1 func = new function7_2_1();
        func.postorder(F1);

        System.out.println("C:\\의 용량"+F2.data);
        System.out.println("D:\\의 용량"+F3.data);
        System.out.println("내 컴퓨터의 전체 용량"+F1.data);
        
        System.out.println();
    }
}
