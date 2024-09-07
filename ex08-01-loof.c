/*파일명 ex08-01.loof.c
반복문
    특정한 부분의 코드가 반복적으로 수행될수 있도록 하는 구문

1. while 문
    while(조건식)
    {
        반복 수행할 코드
    }

*/

#include <stdio.h>

int main()
{
    /*
    int n = 0;
    while(n < 3)
    {
        printf("n is %d now\n",n);
        n++;
    }

    
    printf("n is %d now\n",n);

    return 0;
    */

   int n2 =0;
   while (n2 != -1)
   {
    printf("숫자를 입력하세요(-1 입력시 종료)");
    scanf("%d", &n2);

    if(n2 == -1)
        printf("종료입니다.");
    else
        printf("%d을(를) 입력하셨네요\n",n2);
   }
   
}