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
    printf("%dx%d=%d\n%dx%d=%d\n",4,5,4*5,7,9,7*9);
    
    return 0;
}
*/

#include <stdio.h>

int main()
{
    //정수형 변수의 대한 예제
    /*int age = 12;
    printf("%d\n",age);
    age = 13;
    printf("%d\n",age);*/
  
    //실수형 변수의 대한 예제
    /*float f = 46.5;
    printf("%.2f\n",f); //소수점 둘째 자리까지 출력 %.2f
    double d = 4.428;
    printf("%.2lf\n",d); //소수점 둘째 자리까지 반올림*/

    //const int year = 2000; // 상수
    //printf("올해는 %d년입니다.\n",year);
    
    //printf
    //연산
    
    //int add = 3 + 7;
    //printf("3 + 7 = %d\n",add);
    //printf("%d + %d = %d\n",3,7,3 + 7);
    //printf("3 + 7 = 10\n");
    
    //scanf
    //키보드 입력을 받아서 저장
    /*int input;
    printf("값을 입력하세요 :");
    scanf("%d", &input);
    printf("%d 입니다.",input);*/
    /*int one, two, three;
    printf("값을 세번 입력하시오 : ");
    scanf("%d %d %d",&one,&two,&three);
    printf("입력된 값은 %d %d %d 입니다.\n",one,two,three);*/
    
    //문자(한 글자), 문자열(한 글자 이상의 여러글자)
    /*char c = 'A';
    printf("%c\n",c);*/
    //char c[100];
    //scanf("%s",c);
    //printf("%s\n",c);
    //32:06
    return 0;
}













