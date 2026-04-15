public class function5_1_2 {
   public static boolean stack_overflow() {
        if(header5_1.top==header5_1.size-1) {
            System.out.println("stack overflow");
            return false;
        }
        return true;
    }

    public static boolean stack_underflow() {
        if(header5_1.top==-1) {
            System.out.println("stack underflow");
            return false;
        }
        return true;
    }
}
