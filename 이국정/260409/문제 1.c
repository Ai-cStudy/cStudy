//사용자로부터 양의 정수 n을 입력받아 그 정수의 약수, 약수의 갯수, 약수의 합을 출력하는	프로그램을 만들어보자
// 예 : N = 12
// 약수 : 1,2,3,4,6,12
// 갯수 : 6
// 합 : 28 

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
    int num;


    do {
        printf("input number : ");
        scanf("%d", &num);
    } while (num <= 0);

    int i = 0;
    int sum = 0;
    int j = 0;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
            j++;
            printf("%d \n", i);
        }

    }


    printf("number of divisors : %d\n", j);
    printf("Sum of divisors : %d\n", sum);

    return 0;
}
