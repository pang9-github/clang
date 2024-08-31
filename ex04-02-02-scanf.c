/*
파일명: ex04-02-02-scanf.c
*/
#include <stdio.h>

int main()
{
    
    int n1,n2,n3;
    float f1,f2,f3;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("입력된 정수들: %d %d %d\n",n1,n2,n3);

    return 0;
}