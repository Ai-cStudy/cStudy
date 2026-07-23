// 5개의 정수를 입력받아 배열의 평균을 구한 뒤 평균보다 큰 값들만 출력하는 프로그램을 만들어보자

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

    int sum = 0;
    float aver = 0;

    for (int i = 0; i < 5; i++)
        sum = sum + a[i];

    aver = (float)sum / 5;


    for (int i = 0; i < 5; i++)
    {
        if (a[i] > aver)
            printf("%d ", a[i]);
    }

    return 0;
}