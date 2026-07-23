//사용자로부터 1보다 큰 양의 정수 n을 입력받아 1부터 n까지 짝수이면서 3의 배수인 숫자들의 합을 출력하는 프로그램을 만들어 보자 

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
    int num;

    do {
        printf("input number : ");
        scanf("%d", &num);
    } while (num < 1);


    int i = 0;
    int sum = 0;
    for (i = 2; i <= num; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    printf("sum : %d", sum);

    return 0;
}
