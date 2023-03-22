/*

제목 : Hello world 출력하기

기능 : 문자열의 출력

파일이름 : Hello.c

수정날짜 : 2023/03/18.

작성자 : 성효창



#include <stdio.h> // 헤더파일 선언

int main(void) // main 함수의 시작

{

printf("성효창\n성 효 창\n성  효  창\n"); // 본인의 이름을 출력하는 프로그램

printf("성효창\n"); // 이름, 주소 그리고 전화번호를 모니터에 출력하는 프로그램

printf("경기도 안양시 만안구 안양천서로311\n");

printf("010-5309-1733\n");

return 0;

} // main 함수의 끝

//printfOne.c
#include <stdio.h>

int main(void)

{

printf("Hello Everybody\n");

printf("%d\n", 1234);

printf("%d %d\n", 10, 20);

return 0;

}
*/
//문제 1
//#include <stdio.h>

//int main()
//{
//    printf("제 이름은 홍길동입니다.\n");
//    printf("제 나이는 %d살이고요.\n",20);
//    printf("제가 사는 곳의 번지수는 %d-%d입니다.\n",123,456);

//    return 0;
//}

//문제 2
#include <stdio.h>

int main()
{
    printf("%dx%d=%d\n%dx%d=%d\n",4,5,20,7,9,63);
    
    return 0;
}

