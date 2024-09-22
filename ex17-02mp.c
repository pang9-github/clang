#include <stdio.h>

int main()
{
    int n = 999;
    printf("%p \n",n);

    int *p = &n;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;

    printf("%d %d %d %d %d %d" ,p,p2,p3,p4,p5,p6);

}