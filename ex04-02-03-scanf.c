/*
*/

#include <stdio.h>

int main()
{
    int i1,i2,i3;
    float f1,f2,f3;

    //printf("실수, 정수, 실수 차례대로 입력:");
    //scanf("%f %d %f", &f1, &i1, &f2);

    //printf("세개의 정수 입력:");
    //scanf("%o %x %d", &i1, &i2, &i3);
    //printf("%d %d %d", i1,i2,i3);

    // 8진수 변수 선언
    int octNum = 010; // 8진수 10을 나타낸다.
    // 16진수 변수 선언
    int hexNum = 0xA; // 16진수 A를 나타낸다.

printf("%o, %x\n", octNum,hexNum);
    printf("%d, %d\n", octNum,hexNum);

    return 0;
}