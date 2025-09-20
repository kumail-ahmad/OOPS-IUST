#include <stdio.h>

int main()
{
    int m[5], i, total = 0, fail = 0;
    float per;
    printf("Enter marks in 5 subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &m[i]);
        total += m[i];
        if (m[i] < 40)
            fail++;
    }
    per = total / 5.0;

    if (fail > 1)
        printf("Repeat Year\n");
    else
    {
        if (per >= 90)
            printf("Grade A\n");
        else if (per >= 75)
            printf("Grade B\n");
        else if (per >= 60)
            printf("Grade C\n");
        else if (per >= 40)
            printf("Grade D\n");
        else
            printf("Grade F\n");
    }
    return 0;
}
