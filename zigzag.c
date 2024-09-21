#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            arr[i][j] = (i*a)+(j+1);
        }
    }
    for(int x=0;x<a;x++)
    {
        for(int y=0;y<x+1;y++)
        {
            if(x%2==0)
            {
                printf("%d\t",arr[x-y][y]);

            }
            else
            {
                printf("%d\t",arr[y][x-y]);
            }
        }
        printf("\n");
    }
    for(int x=0;x<a-1;x++)
    {
        for(int y=0;y<a-1-x;y++)
        {
            if(x%2==0)
            {
                printf("%d\t",arr[x+y+1][a-1-y]);

            }
            else
            {
                printf("%d\t",arr[a-1-y][x+y+1]);
            }
        }
        printf("\n");
    }
}