//정수를 하나를 입력받아 그 정수의 약수를 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
   int num;
    int i;

    printf("input number : ");
    scanf("%d", &num);

    i = 1;

    while (i <= num)
    {
        if (num % 1 == 0)
            printf("%d", i);
        i++;
    }
    printf("\n");

    return 0;    
}




