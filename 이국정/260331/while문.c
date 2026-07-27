//반복문 진입-while문
//구구단 2단을 출력하는 프로그램

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i = 1;
    while (i <= 9)
    {
        printf("2 * %d = %d\n", i, 2 * i);
        i++;
    }
}




