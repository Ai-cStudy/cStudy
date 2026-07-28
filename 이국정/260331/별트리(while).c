// while문 사용해서 정삼각형 별트리 만들기

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i = 1;
    int star = 1;
    int starLimit = 1;
    int spaceLimit = 3;
    int space = 1;

    while (i <= 4)
    {
        while (space <= spaceLimit)
        {
            printf(" ");
            space++;
        }
        while (star <= starLimit)
        {
            printf("*");
            star++;
        }
        printf("\n");
        starLimit = starLimit + 2;
        i++;
        star = 1;
        space = 1;
        spaceLimit--;

    }

    return 0;
}