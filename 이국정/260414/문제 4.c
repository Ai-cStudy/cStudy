// 배열의 각 행에서 첫 번째 열과 마지막 열의 값을 서로 바꾸는 코드

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#define INDEX 3

int main(void)
{
    int map[3][3];
    int map2[3][3];
    int i, j;

    map[0][0] = 1, map[0][1] = 2, map[0][2] = 3;
    map[1][0] = 4, map[1][1] = 5, map[1][2] = 6;
    map[2][0] = 7, map[2][1] = 8, map[2][2] = 9;

    for (i = 0; i < INDEX; i++)
    {
        int temp = map[i][0];
        map[i][0] = map[i][INDEX - 1];
        map[i][INDEX - 1] = temp;
    }

    for (i = 0; i < INDEX; i++)
    {
        for (j = 0; j < INDEX; j++)
        {
            printf("%d", map[i][j]);

        }printf("\n");
    }
    
    return 0;
 }


