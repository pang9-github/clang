/*
파일명 : ex01-03-variable
변수?
    메모리 공간에 붙여진 이름.
    c 프로그램에서 사용되는 모든 값을 메모리 공간에 저장
    메모리 공간에 이름을 붙여 접근(입력 수정 삭제) 가능하다.
변수 선언 및 초기화
    자료형 변수명 = 값;
변수명 규칙
    알파벳, 숫자, 언더바(_) 로만 구성
    숫자로 시작(x)
    ! 대소문자 구분한다
*/

#include <stdio.h>

int main(void)
{
    int number1; // int(정수)형 변수 선언
    int number2;
    number1 = 1; // number1 변수에 1 값 대입
    number2 = 2; // 초기화
    int number3 = 3, number4 = 4; // 두 개의 int형 변수 한번에 선언!(과 동시 대입)
    int number5 = 5; //선언 동시에 초기화(값 대입)
    /*
    VSCODE 단축키
    Ctrl + c (복사)
    Ctrl + v (붙여넣기)
    Ctrl + Shift + k (줄삭)
    */
    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);
    printf("number3 = %d\n", number3);
    printf("number4 = %d\n", number4);
    printf("number5 = %d\n", number5);
    // 사용가능 변수명
    int num = 3;
    int num7 = 7;
    int num_ber =  10;
    int Num = 15;
    printf("num = %d\n", num);
    printf("Num = %d\n", Num);
    // 사용불가 변수명
    
    // int hello boy = 3;  // 공백 ㄴㄴ
    // int he#$ = 5;       // 특수기호 ㄴㄴ
    // int 8number = 8;    // 숫자로시작 ㄴㄴ
    // int short = 9;      // 기능이 있는 키워드 ㄴㄴ
    
    return 0 ;
}