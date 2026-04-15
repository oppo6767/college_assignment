public class function3_4 {
    public static void print_func(int[] arr, int len, int count) {
        if (count==0) System.out.print("삽입 전 선형 리스트: ");
        else if (count==6) System.out.print("삭제 후 선형 리스트: ");
        else System.out.print("삽입 후 선형 리스트: ");

        for (int i=0 ; i < len ; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
        System.err.println("원소의 갯수: " + len);
        if (len==6&&count==0)
            System.out.println();

        if (count!=0)
            System.out.println("자리 이동 횟수: " + count + "\n");
    }

    public static int insert(int[] arr, int len) {
        int index=len-1;
        int count=0;
        while (index>=0) {
            if (arr[index]==20) {
                arr[index+1]=30;
                break;
            }
            arr[index+1]=arr[index];
            index--;
            count++;
        }
        return count;
    }

    
    public static int delete(int[] arr, int len) {
        int index=2;
        int count=0;
        while (index<len-1) {
            arr[index]=arr[index+1];
            index++;
            count++;
        }
        arr[index]=0;
        return count;
    }
}