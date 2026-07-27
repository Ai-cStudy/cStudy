// 배열 회전 90도

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

    	for (int i = 0; i < 3; i++)
	    {
            for (int j = 0; j < 3; j++)
            {				
                map2[j][2-i] = map[i][j];			
            }
	    }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", map2[i][j]);
            }printf("\n");
        }
    
    return 0;
 }
