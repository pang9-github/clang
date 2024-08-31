/*


데이터 표현방식
    정수표현
        컴퓨터는 2진수로 표현(bit)
        부호비트 + 수치비트
    실수표현(부동소수)
        지수부(e)비트 + 가수부(n)비트
    부동소수점 오차


    실수표현 수식
        ±(1.가수부)×2^(지수부-127)
        +-(1.m) + 2^(e-127) float(32비트)
        +-(1.m) + 2^(e-1823) double(32비트)
    예) 0.1 -> 2진수
        0.2 * 2 = 0.4 (0)
        0.4 * 2 = 0.8 (0)
        0.8 * 2 = 1.6 (1)
        0.6 * 2 = 1.2 (1)
    
*/

#include <stdio.h>

int main()
{
    float num = 0;
    
    for(int i = 0; i < 10000; i++)
    {
        num += 0.1;
    }
    printf("%.20f/n",num); // 오차 발생
    return 0;
}