#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#define SIZE 10

int main(void)
{

    int nums[SIZE] = {0};
    int n = 4;
    nums[0] = 4;
    nums[1] = 3;
    nums[2] = 9;
    nums[3] = 10;

    for (int i = 0; i < 10; i++)
    {
        printf("nums[%d] =  %d\n", i, nums[i]);
    }

    printf("n = %d\n", n);

    return 0;

}

//문자열에 'a'가 있으면 'b'로 치환하는 프로그램

int main(void)
{
    char ch[100];

    scanf("%s", ch);

    for (int i = 0; i < 100; i++)
    {
    if (ch[i] == '\0')
        break;
    if (ch[i] == 'a')
        ch[i] = 'b';
    }

    printf("%s\n",ch);

    return 0;
}