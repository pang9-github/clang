/*
4. 논리 연산자
    && (AND) : 피연산자가 모두 참이면 참
    || (OR) : 피연산자중 참이 있으면 참
    ! (NOR) : 피연산자가 참이면 거짓, 거짓이면 참
    1 = True, 0 = false
*/

# include <stdio.h>
int main()
{
    printf("논리연산자\n");
    
    int n1=20,n2=10;
    int result1, result2, result3,result4;
    
    result1= 1 && 1;
    result2 = n1 == 20 && n2 == 10;
    result3 = n1 > n2 || n1 ==n2;
    result4 = !(n1>n2||n1==n2);

    printf("1) result: %d\n", result1);
    printf("2) result: %d\n",result2);
    printf("3) result: %d\n",result3);
    printf("4) result: %d\n",result4);
    return 0;
}