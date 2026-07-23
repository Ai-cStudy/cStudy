// 배열의 최대값을 찾고, 그 값이 위치한 index도 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int map[3][3];
    int map2[3][3];
    int i, j;

    map[0][0] = 1, map[0][1] = 2, map[0][2] = 3;
    map[1][0] = 4, map[1][1] = 5, map[1][2] = 6;
    map[2][0] = 7, map[2][1] = 8, map[2][2] = 9;

    int max = map[0][0];
    int max_row, max_col;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < map[i][j])
            {
                max = map[i][j];
                max_row = j;
                max_col = i;
            }
        }
    }

    printf("max : %d, It's map[%d][%d]\n", max, max_row, max_col);

    return 0;
}
