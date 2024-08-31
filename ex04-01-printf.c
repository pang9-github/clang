/*
파일명: ex04-01-printf.c

printf() 함수
    콘솔 화면에 문자열 출력함수 

    제어문자(이스케이프 문자) \ 또는 원표시
        \t 탭(tab)
        \n 줄바꿈
        \b 한 칸 왼쪽으로 이동
        \r 맨 앞으로 이동
        \' 작은 따옴표
        \" 큰 타옴표
        \? 물음표
        \\ 백슬래시

    형식문자(서식문자)
        %d : 부호있는 10진수
        %u : 부호없는 10진수
        %o : 부호없는 8진수
        %x : 부호없는 16진수
        %f : 10진수 방식의 부동소수점 실수(기본 소수점이하 6자리 표현)
        %c : 값에 대응하는 문자
        %s : 문자열
        %p : 포인터 주소값
        %% : %를 출력문자로

        usigned 자료형
            부호없는 데이터
            0 ~ 표현
*/

#include <stdio.h>

int main()
{
    //출력하기
    printf("i love c programing\n");   
    printf("i love c programing\n");

    printf("\"i love c programing.\"\n");
    printf("i love \'c programing\'\n");
    printf("i \tlove \tc \tprograming\n");
    printf("i \blove c programing\\\?\n");

    // unsighed 예
    char cnum = -128; //-128
    unsigned char u_cnum = 255; // 255

    printf("cnum = %d\n",cnum); 
    printf("u_cnum = %d\n",u_cnum); 

    char ch1 = 'x';
    int in1 = 92;
    double dou1  = 20.33322; 
    
    printf("ch1 = %c\n",ch1); //x
    printf("ch1 = %d\n",ch1); //120
    
    printf("in1 = %x\n",in1); //5c
    printf("in1 = %o\n",in1); //134
    
    printf("dou1 = %f\n",dou1); //20.333220
    printf("dou1 = %e\n",dou1);  //2.033322e+01

    float f1 = 1.2345678f;
    printf("%10f\n",f1);
    printf("%-10f\n",f1);
    printf("%10.3f\n",f1);
    printf("%-10.3f\n",f1);

    char ch2 = 'H';
    int in2 = 548;
    printf("%5c\n",ch2);
    printf("%-5c\n",ch2);
    printf("%10d\n",in2);
    printf("%-10d\n",in2);

}
