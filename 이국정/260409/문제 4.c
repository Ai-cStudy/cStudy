// 사용자로부터 1보다 큰 양의 정수 n을 입력받아 각 자리수 중 가장 큰 숫자를 출력

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
    int num;

    do {
        printf("input number : ");
        scanf("%d", &num);
    } while (num < 1);

    int i = 0;
    int max = 0;

    while (num > 0)
    {
        if (max < num % 10)
        {
            max = num % 10;
        }
        num = num / 10;
    }
    printf("%d", max);

    return 0;
}