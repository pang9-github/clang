#include <stdio.h>

void myFunc(int n1, int n2)
{
    printf("n1:%d,n2:%d",n1,n2);
}

void runFunc(int (*p)(int,int),int n1, int n2)
{
    p(n1,n2);
}
int main()
{
    void (*p)(int,int);
    p = myFunc;
    p(9,8);


}