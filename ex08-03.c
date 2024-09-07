/*
break문

*/

#include <stdio.h>

int main()
{
    int n;
    while(1)
    {
        printf("-1 입력시 종료: ");
        scanf("%d",&n);
        if(n == -1)break;

        printf("%d를 입력함\n",n);

    }
    printf("종료합니다.");
    return 0;
}