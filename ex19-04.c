#include <stdio.h>

typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

int main()
{
    typedef char CHAR;
    typedef char* STR;

    INT num = 3;
    PINT ptr = &num;
    UINT unum =5;

    CHAR chr = 'c';
    STR str = "hello";

    printf("%d %d %d %c %s", num, *ptr, unum , chr,str);
}