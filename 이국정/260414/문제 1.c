// 각 행의 합과 각 열의 합을 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int map[3][3];
    int i, j;

    map[0][0] = 1, map[0][1] = 2, map[0][2] = 3;
    map[1][0] = 4, map[1][1] = 5, map[1][2] = 6;
    map[2][0] = 7, map[2][1] = 8, map[2][2] = 9;

    for (i = 0; i < 3; i++)
    {
        int w_sum = 0;

        for (j = 0; j < 3; j++)
        {
            w_sum += map[i][j];
        }

        printf("row %d sum : %d\n", i, w_sum);
    }

    for (j = 0; j < 3; j++)
    {
        int l_sum = 0;

        for (i = 0; i < 3; i++)
        {
            l_sum += map[i][j];
        }

        printf("col %d sum : %d\n", j, l_sum);
    }

    return 0;
}
