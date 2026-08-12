// 숫자 뒤집기(1이상 정수입력)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#pragma warning(disable : 4996)

int main(void)
{
    int a;

    printf("input");
    scanf("%d", &a);

    while (a > 0)
    {
        printf("%d", a % 10);
        a = a / 10;
    }

    int n;
    int count = 1;
    int save[10] = {0};
    int b;
    int sum = 0;
    int savenum = 0;

    scanf("%d", &n);

    savenum = n;

    while (n >= 10)
    {
        n = n / 10;
        count++;
    }

    for (n;  n>= 10; n /= 10)
    {
        count++;
    }

    for (b = 0; b < count; b++)
    {
        save[b] = (savenum % Pow(10, b+1)) / Pow(10, b);
        sum = sum + (save[b] * Pow(10, (count - b - 1)));
    }
    printf("%d\n", sum);

    return 0;
}