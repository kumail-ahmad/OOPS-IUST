#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    int limit = (int)sqrt(n);

    printf("Pairs (x, y) such that x^2 + y^2 = %d:\n", n);

    for (int x = 0; x <= limit; x++)
    {
        for (int y = 0; y <= limit; y++)
        {
            int sum = x * x + y * y;

            if (sum > n)
                break;

            if (sum < n)
                continue;

            printf("(%d, %d)\n", x, y);
        }
    }

    return 0;
}
