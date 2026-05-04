public class Node6_4 {
    Node6_4 link_left;
    String data;
    Node6_4 link_rigth;
    Node6_4 (String data) {
        this.link_left=null;
        this.data=data;
        this.link_rigth=null;
    } 
    public enum printmode { front_en, rear_en, front_de, rear_de }
    public static Node6_4 front=null;
    public static Node6_4 rear=null;
}