public class function7_2_1 {
    public void postorder(Node7_2 Node) {
        if(Node!=null) {
            postorder(Node.L);
            postorder(Node.R);
            if(Node.L!=null)
                Node.data+=Node.L.data;
            if(Node.R!=null)
                Node.data+=Node.R.data;
        }
    }
}