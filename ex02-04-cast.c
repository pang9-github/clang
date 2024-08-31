/*
파일명:ex02-04-cast

변수 선언 주의사항 과 강제 형변환
*/
#include <stdio.h>

int main()
{
    double num1 = 10;   // 실수로 저장
    int num2 = 1.2345;  // 자동으로 정수로 변환
    short num3 = 70000; // 범위외, overflow

    printf("num1: %f\n",num1); // 10.000000
    printf("num2: %d\n",num2); // 1
    printf("num3: %d\n",num3); // 4464

    printf("(short)3.1415: %d\n",(short)3.1415);
    printf("(int)3.1415: %d\n",(int)3.1415); 
    printf("(double)10: %f\n",(double)10); 
    printf("(float)10: %f\n",(float)10); 

}