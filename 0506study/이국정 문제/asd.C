#include <stdio.h>

int main()
{
    int arr[7] = {0};
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num = 1;
    for (int i = 0; i < 7; i++)
    {
        if ((arr[i] == arr[i + 1]))
        {
            num++;
            continue;
        }
        else
        {
            printf("%d %d\n", arr[i], num);
            num = 1;
        }
    }
    return 0;
}