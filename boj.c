#include <stdio.h>

int main()
{
    long long int a;
    int k = 1;
    scanf("%lld",&a);
    
    while(1)
    {
        if(k*(k-1)/2 < a && a <= (k)*(k+1)/2)
        {
            break;
        }
        k++;
    }
    int n= k * (k + 1) / 2;
    if (k%2 == 0)
    {
        printf("%d/%d",k-(n-a),n-a+1);
    }
    else
    {
        printf("%d/%d",n-a+1,k-(n-a));
    }

}