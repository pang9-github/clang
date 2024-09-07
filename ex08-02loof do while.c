/*

2. do ~while 문
    while문과 동일해지만 최초한번은 무조건 실행
*/

#include <stdio.h>

int main()
{

   int n=0;
   do
   {
    printf("n is %d now\n", n);
    n++;
   }
   while (n  < 3);

   
}