//2. 사용자로부터 정수 1개를 입력받아 이 수가 양수인지, 음수인지, 0인지 판별하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    int num1;
    printf("Input number : ");
    scanf("%d", &num1);

    if (num1 > 0)
        printf("input number is positive number\n");
    else if (num1 == 0)
        printf("input number is zero\n");
    else 
        printf("input number is negative number\n");

    return 0;
}