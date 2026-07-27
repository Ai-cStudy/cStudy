// 이중 for문을 사용해서 구구단 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i;
    int j;

    for (i = 2; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}