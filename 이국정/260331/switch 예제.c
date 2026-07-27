//1인지, 2인지, 다른 수 인지 구분하는 프로그램

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int num;
    printf("input number : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("num is %d\n", num);
        break;
    case 2:
        printf("num is %d\n", num);
        break;
    default:
        printf("not 1 or 2\n", num);
        break;
    }

return 0 ;
}