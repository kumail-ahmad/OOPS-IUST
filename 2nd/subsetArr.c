#include <stdio.h>

void printSubset(int subset[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", subset[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("]\n");
}

void findSubsets(int arr[], int n, int target) {
    int total = 1 << n;

    for (int i = 1; i < total; i++) {
        int sum = 0;
        int subset[n];
        int subsetSize = 0;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
                subset[subsetSize++] = arr[j];
            }
        }

        if (sum == target)
            printSubset(subset, subsetSize);
    }
}

int main() {
    int arr[20], n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Subsets with sum %d:\n", target);
    findSubsets(arr, n, target);

    return 0;
}
