/*
중첩반복문
*/


#include <stdio.h>

int main()
{   
    int i = 0;
    for(i=0;i<7;i++);
    {
        for(int j=0; j< i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}