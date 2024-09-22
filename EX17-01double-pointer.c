/*
더블 포인터 변수
*/
#include <stdio.h>

int main()
{
    int n = 3;
    int *p = &n;
    int **dp = &p;
    int *p2;

    printf("%d %d %d\n",n,*p,**dp);
    p2 = *dp;
    *p = 2;
    printf("%d %d %d\n",n,*p,**dp);

    printf("n = %p \n",&n);
    printf("p = %p \n",&p);
    printf("p2 = %p \n",&p2);
    printf("dp = %p \n",&dp);

    printf("p = %p \n",p);
    printf("p2 = %p \n",p2);
    printf("dp = %p \n",dp);
}
