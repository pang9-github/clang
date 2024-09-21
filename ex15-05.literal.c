#include <stdio.h>

int localFunc(int n)
{
    int result = 0;
    return result + n;
}
int main()
{
    int n = 5;
    int result = localFunc(n);

    printf("결과 %d\n",result);
}