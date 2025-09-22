#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("%d", l);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}