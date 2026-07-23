// 특정 숫자 개수 세기

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main(void)
{
    int num;
    int a;
    int count = 0;
    int b;

    printf("input number : ");
    scanf("%d %d", &num, &a);

    while (num > 0)
    {	
        b = num % 10;
        num = num / 10;
        
        if (a == b)
        {
            count++;
        }
        

    }

    printf("count of %d is %d\n", a, count);

    return 0;
}