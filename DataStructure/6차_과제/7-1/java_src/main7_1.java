public class main7_1 {
    public static void main(String[] args) {
        Node7_1 tree7=new Node7_1('A', null, null);
        Node7_1 tree6=new Node7_1('B', null, null);
        Node7_1 tree5=new Node7_1('C', null, null);
        Node7_1 tree4=new Node7_1('D', null, null);
        Node7_1 tree3=new Node7_1('*', tree7, tree6);
        Node7_1 tree2=new Node7_1('/', tree5, tree4);
        Node7_1 tree1=new Node7_1('-', tree3, tree2);

        function7_1_1 func = new function7_1_1();
        func.preorder(tree1);
        System.out.println();
        func.inorder(tree1);
        System.out.println();
        func.postorder(tree1);
        System.out.println();
    }
}
