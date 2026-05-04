public class function6_4_2 {
    public static void print_func(String item, Node6_4.printmode mode) {
        switch (mode) {
            case front_en:
                System.out.print("front 삽입"+item+">> Queue:[");
                break;
            case rear_en:
                System.out.print("rear  삽입"+item+">> Queue:[");
                break;
            case front_de:
                System.out.print("front 삭제>> Queue:[");
                break;
            case rear_de:
                System.out.print("rear  삭제>> Queue:[");
                break;
        }

        Node6_4 temp=Node6_4.front;
        while (temp!=null) {
            System.out.print(temp.data+" ");
            temp=temp.link_rigth;
        }
        System.out.print("]");
    }
}
