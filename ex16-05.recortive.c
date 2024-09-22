/*
재귀함수
    자기 자신을 호출하는 함수
    반복문 비슷

    장점 : 변수 선언 ↓ -> 가독성 좋음
    단점 스택메모리 오버플러우 발생

(낮은주소)
main()
    sayHello()
        sayHello()
            sayHello()
                sayHello()
                    sayHello()

*/

#include <stdio.h>

void sayHello()
{
    printf("Hello!\n");
    sayHello();
}

int main()
{
    sayHello();
}