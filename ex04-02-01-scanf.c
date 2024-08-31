/*
파일명:ex04-02-01-scanf.c

scanf() 함수

*/
#include <stdio.h>

int main()
{
    char ch1;
    int in1;
    float f1;

    scanf("%c", &ch1);

    scanf("%d", &in1);
    scanf("%f", &f1);

    printf("ch1 = %c,in1 = %d,f1 = %f \n",ch1,in1,f1);
    return 0;
}