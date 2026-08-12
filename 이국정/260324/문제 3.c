//3.사용자로부터 시험점수(0~100)를 입력받아 점수에 따른 등급을 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    int num1;
    printf("Input score(0~100) : ");
    scanf("%d", &num1);

    if (num1 < 0 || num1 > 100)
    {
        printf("over number");
        exit(1);
    }

    if (num1 >= 90 && num1 <= 100)
        printf("A");
    else if (num1 >= 80 && num1 < 90)
        printf("B");
    else if (num1 >= 70 && num1 < 80)
        printf("C");
    else if (num1 >= 60 && num1 < 70)
        printf("D");
    else
        printf("F");

    return 0;
}