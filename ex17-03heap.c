/*지역변수 사용시 함수를 벗어나면 소멸*/

#include <stdio.h>

char* getSting()
{
    char str[100];
    printf("좋아하는 단어는?");
    gets(str);
    return str;
}
int main()
{
    char* result = getSting();
    printf("당신이 좋아하는 단어는 %s\n",result);
}