#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};
int main()
{
    struct person boy,girl;

    strcpy(boy.name,"김소년");
    strcpy(girl.name,"이소녀");
}