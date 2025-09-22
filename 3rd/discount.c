#include <stdio.h>

int main() {
    float amt, disc, total;

    printf("Enter purchase amount: ");
    scanf("%f", &amt);

    if (amt < 100) {
        disc = 0;
    } 
    else if (amt <= 500) {
        disc = 0.10 * amt;
    } 
    else if (amt <= 1000) {
        disc = 0.15 * amt;
    } 
    else {
        disc = 0.20 * amt;
    }

    total = amt - disc;

    printf("Total after discount: %.2f\n", total);

    return 0;
}
