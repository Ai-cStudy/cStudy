//구구단 2단을 거꾸로 출력하는 프로그램

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i = 9;
    while (i <= 9 && i > 0 )
    {
        printf("2 * %d = %d\n", i, 2 * i);
        i--;

    }
    
    return 0;
}

//or

int main(void)
{
    int i = 9;
    while (i > 0 )
    {
        printf("2 * %d = %d\n", i, 2 * i);
        i--;

    }

    return 0;
}



