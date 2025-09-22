#include <stdio.h>
int main()
{
    int rows = 20;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}