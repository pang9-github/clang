#include <stdio.h>
#include <stdlib.h>

#define INITA_BUFFER_SIZE 1

int main()
{
    int c;
    int len = 0;
    int buffer_size = INITA_BUFFER_SIZE;

    char *str = (char*)malloc(buffer_size);

    if(str == NULL)
    {
        printf("메모리 초과");
        return 1;
    }

    while ((c =getchar()) != '\n' && c != EOF)
    {
        str[len++] = c;
        if (len == buffer_size)
        {
            buffer_size *= 2;

            str = realloc(str, buffer_size);

            if(str == NULL)
            {
                printf("메모리 초과");
                return  1;
            }
        }
    }

    str[len] = '\0';
    printf("you enterd %s\n",str);

    free(str);

    return 0;
}