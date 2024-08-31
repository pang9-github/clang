/*
파일명:

리터럴(literal)
    값이 그자체로 고정된 상수를 의미

    예)
    정수형 상수 : 10, -10
    실수형 상수 : 2.2, 3.14, -5.1
    문자형 상수 : 'A','B','C'

    심블릭 상수(const)
    상수에 이름을 붙인것
    변경불가!

    메크로 상수
        심블릭 상수 일종
        컴파일시 가장먼저 메크로 상수를 처리함
*/

#include <stdio.h>
#define LENGTH 10 // 매크로 상수 정의에선 세미콜론 불필요

int main(void)
{
    printf("LENGTH = %d\n",LENGTH);
    int number = 3; // 일반변수
    const int NUMBER = 5; // 심블릭 상수
    number = 10;
    // NUMBER = 11; // 컴파일에러:expression must be a modifiable lvalueC/C++(137),
    // 상수는 값을 변경할수 없음
    return 0;
}