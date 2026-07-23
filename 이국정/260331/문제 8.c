// 입력한 숫자의 각 자기수 합 구하기

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main(void)
{
    int num;
    int a = 0;
    int sum = 0;

    printf("input number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        sum = sum + a;
        
    }
    printf("%d", sum);

    return 0;
}