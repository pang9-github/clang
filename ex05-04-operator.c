/*시프트 연산자
    쉬프트 연산은 좌항에 있는 피연산자를 우항에 있는 수만큼 비트 자리 이동하는 연산을 수행
    << 는 왼쪽 쉬프트 연산자이고 >> 는 오른쪽 쉬프트 연산자
*/

#include <stdio.h>
long long a;
int main ()
{
    printf("시프트 연산자\n");
    int x,y;
    x=3;
    y = x<<2;
    printf("%d << 2 = %d\n",x,y);

    y = x<<2;
    printf("%d >> 2 = %d\n",x,y);
}