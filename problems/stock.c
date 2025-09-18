#include <stdio.h>

int main() {
    char items[10][30];
    int qty[10];
    int expiry[10];
    int n, i;

    printf("Enter number of items (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nItem %d name: ", i + 1);
        scanf("%s", items[i]);

        printf("Quantity: ");
        scanf("%d", &qty[i]);

        printf("Days to expire: ");
        scanf("%d", &expiry[i]);
    }

    printf("\n--- Fridge Stock ---\n");
    for(i = 0; i < n; i++) {
        printf("%s - %d units - %d days left\n", items[i], qty[i], expiry[i]);
        if(expiry[i] <= 3) {
            printf("  Use %s soon! It's close to expiring.\n", items[i]);
        }
    }

    return 0;
}
