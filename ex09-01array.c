/*
배열
    다수의 데이터를 저장하고 처리하기 위해 사용하는 데이터 표현 방법.
    여러 개의 데이터를 하나의 묶음으로 관리할 수 있는 데이터 구조.
*/

# include <stdio.h>

int main()
{
    // 길이 정보가 포항된 배열 선언 및 초기화
    int n[3] = {1,2,3};

    // 길이 정보가 포항되지 않은 배열 선언 및 초기화
    char characters[] = {'a','b','c','d','e'} ;

    int odd[3]; //배열 선언ㅁ나 하고 초기화 되지 않은 배열

    odd[0] =1;
    odd[1] =3;
    odd[2] =5;

    printf("%d %d %d\n",odd[0],odd[1],odd[2]);
    for(int i=0;i<3;i++)
    {
        printf("%d\n",odd[i]);
    }
}