/*
7.증감 연산자
    ++ : 변수의 값을 1 증가시킨다
    -- : 변수의 값을 1 감소시킨다
*/


#include <stdio.h>

int main(void)
{
    printf("증감연산자\n");

    int i = 1;
    printf("1)전위 증감연산자: %d\n",++i);
    printf("2)전위 증감연산자: %d\n", i);

    int j =3;
    printf("1)후위 증감연산자: %d\n",j++);
    printf("1)후위 증감연산자: %d\n",j);
    
    return 0;
}
