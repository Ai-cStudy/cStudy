// 함수를 이용한 사칙연산 계산기

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
float divi(int num1, int num2);

int main(void)
{
    int num1, num2;
    char op;

    while (1)
    {
        printf("input expression : ");
        scanf("%d %c %d", &num1, &op, &num2);

        switch (op)
        {
        case '+':
            printf("%d\n", add(num1, num2));
            break;

        case '-':
            printf("%d\n", sub(num1, num2));
            break;

        case '*':
            printf("%d\n", mul(num1, num2));
            break;

        case '/':
            if (num2 == 0)
                printf("0으로 나눌 수 없습니다.\n");
            else
                printf("%f\n", divi(num1, num2));
            break;

        default:
            printf("잘못된 연산자입니다.\n");
            break;
        }
    }

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

float divi(int num1, int num2)
{
    return num1 / (float)num2;
}