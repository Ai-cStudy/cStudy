// 5개의 정수를 입력받아 짝수의 개수를 세는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
    int a[5];

    printf("input 5 numbers : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("Number of even numbers is : %d", count);

    return 0;
}