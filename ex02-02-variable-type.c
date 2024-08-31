/*
파일명:ex02-02-variable-type.c

- c언어 기본 자료형 종류
    - 문자
        char    1byte -128~+127
    - 정수
        short   2byte -32,768 ~ +32,767(약 -10⁵~10⁵)
        int     4byte -2147483648 ~ +2147483647(약 -10⁹~10⁹)
        long    4~8byte - (운영체제에 따라 달라짐)
        long long   8byte 이상
    - 실수
        float   4byte   소수점 6~9자리
                (float 자료형은 숫자 뒤에 f를 붙인다.)
        double  8byte   소수점 14~17자리
        long double 8byte 이상 double 이상의 표현범위
    sizeof 연산자
    자료형의 크기를 변환한다.
*/

#include <stdio.h>

int main()
{
    char ch1 = 66, ch2 = 'B';
    short sh1 = 67;
    printf("ch1 = %c\n",ch1); // B
    printf("ch2 = %c\n",ch2); // B
    printf("sh1 = %c\n",sh1); // C
    printf("sh1 = %d\n",sh1); // 67

    int in1 = 68;
    printf("in1 = %c\n",in1); // D
    printf("in1 = %d\n",in1); // 68
    float f1 = 3.14f;
    printf("f1 = %f\n",f1); // 3.1400000

    printf("size(100) = %d\n",sizeof(100));
    printf("size(3.14) = %d\n",sizeof(3.14));

    long ln1 = 2147483647;
    printf("ln1 = %d\n",ln1); //2147483647
    long ln2 = 2147483648; 
    printf("ln2 = %d\n",ln2); //-2147483648 운영체제에 따라 다를수 있음
}