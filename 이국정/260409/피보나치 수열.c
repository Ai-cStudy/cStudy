// 피보나치 수열 n번째 값 (피보나치 수열 : 1,1,2,3,5,8,13,.... 처럼 앞의 두 숫자를 더한 값)

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#define SIZE 10

int main(void)
{
	int num;
    printf("input number : ");
    scanf("%d", &num);

    int a = 1;
    int b = 1;
    int next;

    for (int i = 3; i <= num; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }

    printf("%dth number is %d", num, b);

    return 0;
}