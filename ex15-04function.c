#include <stdio.h>

void guide()
{
    printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
    printf("또한 printfNumber 함수를 통해 입력한 정수를 출력할 수 있습니다.\n");

}

void printfNumber(int n)
{
    printf("당신이 입력한 정수는 %d 입니다.\n",n);
}
int inputNumber()
{
    int n;
    printf("정수를 입력해 주세요: ");
    scanf("%d",&n);

    return n;
}

int main()
{
    guide();
    printfNumber(inputNumber());
}