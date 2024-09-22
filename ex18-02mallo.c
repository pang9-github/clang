#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*)malloc(sizeof(int)* 5);
    double *dp = (double*)malloc(sizeof(double)*3);
    for(int i  = 0;  i < 3; i++)
    {
        p[i] = 10 *(i+1);
        printf("%d",p[i]);
    }
    printf("\n");
    dp[0] = 3.14;
    dp[1] = 4.14;
    dp[2] = 5.14;

    printf("%.2f,%.2f,%.2f\n",dp[0],dp[1],dp[2]);

    if(p != NULL) free(p);
    if(dp != NULL) free(dp);


    return 0;
}