// 팩토리얼

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i;
    int j;
    int k = 1;

    printf("input");
    scanf("%d", &i);

    for (j = 1; j <= i; j++)
    {
        k = k * j;
    }

    printf("%d", k);

    return 0;
}