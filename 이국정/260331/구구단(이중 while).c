// 반복문 중첩, 2단부터 9단까지 나오는 프로그램
// 보통 반복문에 들어가는 증감변수는 i, j, k를 주로 씀

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i = 2;
    int j = 1;


    while (i <= 9) {
        while (j <= 9)
        {
            printf("%d * %d = %d\n",i, j, i * j);
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }

    return 0;
}
