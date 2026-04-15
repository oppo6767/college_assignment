void print(int* list, int len, int count) {
    if (count==0) printf("삽인 전 선형 리스트:"); // 초반 형태
    else if (len==6) printf("삭제 후 선형 리스트:"); //삭제
    else printf("삽입 후 선형 리스트:"); //삽입

    for (int i = 0; i < len ; i++)
        printf("%d ", list[i]);
    printf("\n");
    printf("원소의 갯수:%d\n", len);
    if (len==6&&count==0)
        printf("\n");
    
    if (count!=0)
        printf("자리 이동 횟수:%d\n\n", count);
    
}

int insert(int* list, int len) {
    int index=len-1; // 맨 처음에 이동시켜야 하는 index 위치
    int count=0; // 자리 이동 횟수
    while (index>=0) {
        if (list[index]==20) {
            list[index+1]=30;
            break;
        }
        list[index+1] = list[index];
        index--;
        count++;
    }
    return count;
}

int delete(int* list, int len) {
    int index=2; // 맨 처음에 이동시켜야 하는 index 위치
    int count=0; // 자리 이동 횟수
    while (index<len-1) {
        list[index] = list[index+1];
        index++;
        count++;
    }
    list[index]=0;

    return count;
}