public class function7_1_1 {
    public void preorder(Node7_1 Node) {
        if(Node!=null) {
            System.out.print(Node.data);
            preorder(Node.L);
            preorder(Node.R);
        }
    }

    public void inorder(Node7_1 Node) {
        if(Node!=null) {
            inorder(Node.L);
            System.out.print(Node.data);
            inorder(Node.R);
        }
    }

    public void postorder(Node7_1 Node) {
        if(Node!=null) {
            postorder(Node.L);
            postorder(Node.R);
            System.out.print(Node.data);
        }
    }
}