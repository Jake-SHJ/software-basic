#include <stdio.h>
// #include 명령어를 통해 다양한 라이브러리를 불러옴
// standard input/output 에 기본적인 기능이 포함되어 있음 (ex. printf)

int main(void) // 항상 메인 함수로부터 시작
{
    printf("Hello World!"); // stdio.h 헤더 파일에 포함, 특정 문자의 출력
    system("pause");
    // 운영체제 기능을 이용 (pause는 mac에는 없는듯, 명령 프롬프트에서 입력 전까지 대기하는 기능)
    return 0; // 메인 함수는 항상 0을 반환하는 것이 일반적
}