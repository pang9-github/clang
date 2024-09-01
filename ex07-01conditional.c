/*
조건문
조건식의 결과에 따라 별도의 명령을 수행하도록 하는 문법

if 문
    if(조건)
    {
        조건이 참일경우 실행코드
    }

    if(조건)
        실행코드,(실행코드가 하나일 경우 중괄호 생략가능)
if~else 문
    if(조건)
    {
        조건이 참일경우 실행코드
    }
    else
    {
        조건이 거짓일 경우 실행코드
    }
if ~ else if ~else 문
    여러 조건 추가 가능
    if(조건1)
    {
        조건1 참일 경우 실행코드
    }
    else if(조건2)
    {
        조건2가 참일 경우 실행코드
    }
    else if(조건3)
    {
        조건3가 참일 경우 실행코드
    }
        .
        .
        .
        .
        .
        .
        .
        .
        .
        .
    else
    {
        모든 조건들이 거짓일 경우 실행코드
    }
*/

#include <stdio.h>

int main()
{
    // 1-1 if문
    int n =3;
    if (n<3){
        printf ("num is small than 3!\n");
    }
    if (n =3){
        printf("num is 3!\n");
    }
    if (n>3){
        printf ("num is larger than 3!\n");
    }

    // 1-2 if~else
    char alpha = 'A';
    if (alpha == 'B')
    {
        printf("alpha is b\n");
    } 
    else
    {
        printf("alpha is not B\n");
    }

    int score =74;
    if(score >90){
        printf("수 입니다.\n");
    } else if (score >80){
        printf("우 입니다.\n");
    } else if (score >70){
        printf("미 입니다.\n");
    } else if (score >60){
        printf("양 입니다.\n");
    } else {
        printf("가 입니다.\n");
    }
    
    return 0;
}