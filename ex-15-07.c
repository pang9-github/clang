#include <stdio.h>

int gn = 10;

void increasedNumber()
{
    static int number = 0;

    number++;
    printf("number %d\n",number);
}

int main()
{
    increasedNumber();
    increasedNumber();
    increasedNumber();
    increasedNumber();

}