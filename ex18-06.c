#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

int main(void)
{
    struct person boy = {"김소년",12};
    struct person girl = {"김소녀",9};
    printf("소년의 이름 %s 나이 %d\n",boy.name,boy.age);
    printf("소su의 이름 %s 나이 %d\n",girl.name,girl.age);

}