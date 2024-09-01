/*파일명 : ex05-06-operator.c

8. 삼항 조건 연산자
    조건식  ? 참일 경우 결과 : 거짓일 경우 결과

*/

#include <stdio.h>

int main(void)
{
    printf("삼항연산자\n");
    int n1 = -10;
    int absolute = n1 > 0 ? n1 :n1 *-1;
    printf("절대값: %d\n",absolute);

    return 0;
}
