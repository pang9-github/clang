#include <stdio.h>
int n =0;
void printNumber()
{
    printf("전역변수 n는 %d를 저장하고 있다.\n",n);
}

int main()
{
    int n =3;
    printf("지역변수 n 은 %d를 저장하고 있다.\n",n);
    printNumber();
    
}
