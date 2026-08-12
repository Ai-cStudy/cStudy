// 사용자로부터 문자열을 입력받아 회문(Palindrome)을 판별하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#define TRUE 1
#define FALSE 0

int main(void)
{
    char ch[100];

    printf("input character string : ");
    scanf("%s", ch);

    int len = 0;
    //문자열 길이 계산
    for (len = 0; ch[len] != '\0'; len++);

    int i;
    int flag = 0;
    for (i = 0; i < len / 2; i++)
    {
        if (ch[i] == ch[len - 1 - i])
        {
            flag = TRUE;
        }
        else
        {
            flag = FALSE;
            break;
        }
    }

    if (flag == TRUE)
        printf("It's Palindrome\n");
    else
        printf("It's not Palindrome\n");


    return 0;
}