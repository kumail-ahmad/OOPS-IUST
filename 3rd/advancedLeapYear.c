#include <stdio.h>

int main()
{
    int year, count = 0, next;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("%d is a leap year\n", year);
            else
            {
                printf("%d is not a leap year\n", year);
                next = year + 1;
                while (count < 5)
                {
                    if ((next % 4 == 0 && next % 100 != 0) || (next % 400 == 0))
                    {
                        printf("%d\n", next);
                        count++;
                    }
                    next++;
                }
            }
        }
        else
            printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
        next = year + 1;
        while (count < 5)
        {
            if ((next % 4 == 0 && next % 100 != 0) || (next % 400 == 0))
            {
                printf("%d\n", next);
                count++;
            }
            next++;
        }
    }
    return 0;
}
