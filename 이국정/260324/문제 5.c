//나이를 입력받아 입장료를 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    int age;
    printf("input your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 130)
    {
        printf("out of range\n");
        exit(1);
    }

    if (age < 8)
        printf("under 8 years old is free\n");
    else if (age >= 8 && age <= 19)
        printf("Ages 8 and older, 19 and younger is 5000won\n");
    else
        printf("adult is 10000won\n");

    return 0;
}