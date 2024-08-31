/*
연산자
1. 산술 연산자
    +,-,*,/,% 
    2.대입연산자
    : 연산자 오른쪽에 있는 값을 왼쪽에 있는 변수에 대입.

    3. 비교연산자
    >   크다
    >=  크거나 같다
    <   작다
    <=  작거나 같다
    ==  같다
    !=  다르다
*/

#include  <stdio.h>
int main()
{
    // 산술연산자
    printf("산술연산자\n");

    int n1 = 7,n2 = 3;
    printf("%d+%d=%d\n",n1,n2,n1+n2);
    printf("%d-%d=%d\n",n1,n2,n1-n2);
    printf("%d*%d=%d\n",n1,n2,n1*n2);
    printf("%d/%d=%d\n",n1,n2,n1/n2);
    printf("%d%%%d=%d\n",n1,n2,n1%n2);
    printf("\n");

    printf("대입연산자\n");

    int n3 =3, n4 = 4;
    n3 += 3;    // n3 = n3 +3
    n4 *= 4;    // n4 = n4*4
    printf("num3 += 3의 결과: %d\n",n3);
    printf("num4 *= 4의 결과: %d\n",n4);

    int a =10, b =11;

    printf("a>b: %d\n", a>b);
    printf("a==b: %d\n",a==b);
    printf("a<b: %d\n", a<b);
    printf("a>=b: %d\n",a>=b);
    printf("a<+b: %d\n", a<+b);
    printf("a!=b: %d\n",a!=b);
    return 0;
}