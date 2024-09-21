#include <stdio.h>

void swapNumber(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    printf("함수 안에서 확인한 결과 n1 : %d n2 : %d\n",n1,n2);

}
int main()
{
    int n1 =33, n2 = 99;

    swapNumber(&n1,&n2);
    printf("함수 호출 완료후 확인 결과 n1:%d n2:%d",n1,n2);
}