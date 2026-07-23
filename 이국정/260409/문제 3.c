// 사용자로부터 1보다 큰 양의 정수 n을 입력받아 1부터 n까지 숫자 중에서 각 자리수의 합이 10인 숫자만 출력하는 프로그램을 만들어보자

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

    for (i = 1; i <= num; i++)
    {
        int j = i;
        int sum = 0;

        while (j != 0)
        {
            sum = sum + (j % 10);
            j = j / 10;
        }
        if (sum == 10)
        {
            printf("answer is %d\n", i);
        }
    }

    return 0;
}

// or

int main(void)
{
    int num;

    do {
        printf("input number : ");
        scanf("%d", &num);
    } while (num < 1);

    int i = 0;

    for (i = 1; i <= num; i++)
    {
        int sum = 0;

        for (int j = i; j > 0; j = j / 10)
        {
            sum = sum + (j % 10);
            if (sum == 10)
            {
                printf("answer is %d\n", i);
            }
        }
    }

    return 0;
}