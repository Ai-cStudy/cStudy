// 반복문 중첩 4단부터 8단까지 나오는 프로그램(*12까지)

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i = 4;
    int j = 1;

    while (i < 9) {
        while (j <= 12)
        {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }

    return 0;
}

//or

int main(void)
{
    int i = 1;
    int j = 1;

    while (i <= 5)
    {
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
        j = 1;
    }

    return 0;
}