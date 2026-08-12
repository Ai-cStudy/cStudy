// 2~100 숫자 중 소수 출력 및 소수 개수 출력

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main(void)
{
    int i;
    int j;
    int k = 0;
    int count = 0;

    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        
        if (count == 2)
        {
            printf("%d ", i);
            k++;
        }
        count = 0;
        
    }
    printf("\n");
    printf("%d\n", k);

    return 0;
}