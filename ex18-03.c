#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gerString()
{
    char *str = (char*)malloc(sizeof(char)* 100);
    printf("좋아하는 단어는?");
    gets(str);

    return str;
}

int main()
{
    char *result = gerString();
    printf("당신이 좋아하는 단어는 %s\n",result);

    if (result != NULL)free(result);

    return 0 ;
}