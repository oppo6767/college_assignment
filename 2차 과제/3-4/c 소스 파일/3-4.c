#include <stdio.h>
#include "3-1-1.c"

void print(int* list, int len, int count);
int insert(int* list, int len);
int delete(int* list, int len);

int main() {
    int list[8]={10, 20, 40, 50, 60, 70};
    int len=0;
    int count=0;

    //초반 원소 개수
    for (int i = 0; list[i]!=0; i++) len++;
    print(list, len, count);

    //삽입
    count=insert(list, len);
    // 삽입 후 선형 리스트 길이
    len=0;
    for (int i = 0; list[i]!=0; i++) len++;
    print(list, len, count);

    // 삭제
    count=delete(list, len);
    // 삭제 후 선형 리스트 길이
    len=0;
    for (int i = 0; list[i]!=0; i++) len++;
    print(list, len, count);
    
    return 0;
}