// n개의 정수를 입력받아 배열의 순서를 거꾸로 만들어서 출력하는 프로그램을 만들어보자 (출력만 거꾸로가 아님)

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
    int a[5];
    int b[5];

    printf("input %d numbers : ");


        for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        b[5 - 1 - i] = a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        a[i] = b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

//or

int main(void)
{
    int nums[5];
    printf("input 5 numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[5 - 1 - i];
        nums[5 - 1 - i] = temp;
    }

    for (int i = 0; i < 5 / 2; i++)
    {
        printf("%d", nums[i]);
    }

    return 0;
}

//메모

// 이게 스왑(바꾸는 것)
// int a = 1;
// int b = 2;
// int c;

// c = a;
// a = b;
// b = c;
