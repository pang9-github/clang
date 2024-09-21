/*
stack 

*/


#include <stdio.h>

int globalNumber = 10;

int add(int a, int b)
{
    int result = a+b;
    return result;
}

int multiply(int x, int y)
{
    int product = x * y;
    return product;
}

int main()
{
    int n1 = 5;
    int n2 = 5;
    int sum = add(n1,n2);
    int total = multiply(sum,2);
    printf("result: %d\n",total);
    printf("globalNumber: %d\n",globalNumber);

}