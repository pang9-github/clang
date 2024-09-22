#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int count = 0;
    int maxSize = 3;
    int num;
    int i;
    p = (int*)calloc(maxSize, sizeof(int));
    while (1)
    {
        printf("함수를 입력하세요(-1입력시 종료): ");
        scanf("%d", &num);
        if(num == -1) break;

        if(count == maxSize)
        {
            maxSize == maxSize;

            p = (int*)realloc(p,maxSize * sizeof(int));

        }
        p[count++] = num;

    }
    for(i = 0; i<count;i++)
    {
        printf("%d\n",p[i]);
    }
    if (p != NULL) free(p);

    return  0;
}