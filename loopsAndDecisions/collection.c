#include <stdio.h>

int main() {
    int n, i, num;
    int smallest, largest;
    float sum = 0, avg;

    printf("Enter how many numbers (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! N must be greater than 0.\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);

   
    smallest = largest = num;
    sum = num;

    
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;

        sum =sum+ num;
    }

    avg = sum / n;

    printf("\nSmallest = %d\n", smallest);
    printf("Largest = %d\n", largest);
    printf("Average = %.2f\n", avg);

    return 0;
}
