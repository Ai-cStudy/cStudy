//5개의 정수를 입력받아 최대값과 최소값을 구하는 프로그램을 만들어 보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
    int a[5];
    int max;
    int min;

    printf("input num : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        
    }

    max = a[0];
    min = a[0];

    for (int i = 0; i < 5; i++)
    {	
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }

    printf("max is = %d\n", max);
    printf("max is = %d\n", min);

    return 0;
}