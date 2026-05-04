public class main3_4 {   
    public static void main(String[] args) {
        int[] arr = {10, 20, 40, 50, 60, 70, 0, 0};
        int count=0;
        int len=0;

        //초반
        for(int i=0;arr[i]!=0;i++) len++;
        function3_4.print_func(arr, len, count);
        
        //삽입 후
        count = function3_4.insert(arr, len);
        len=0;
        for(int i=0;arr[i]!=0;i++) len++;
        function3_4.print_func(arr, len, count);

        //삭제 후
        count = function3_4.delete(arr, len);
        len=0;
        for(int i=0;arr[i]!=0;i++) len++;
        function3_4.print_func(arr, len, count);
    }
}
