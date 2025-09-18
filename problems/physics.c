#include <stdio.h>

int main() {
    int choice;
    float v, i, r, m, v2, ke;
    float m1, m2, d, f;
    const float G = 6.674e-11;

    printf("Select Option:\n");
    printf("1. Ohm's Law \n");
    printf("2. Kinetic Energy \n");
    printf("3. Gravitational Force \n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter current (I): ");
            scanf("%f", &i);
            printf("Enter resistance (R): ");
            scanf("%f", &r);
            v = i * r;
            printf("Voltage = %.2f V\n", v);
            break;

        case 2:
            printf("Enter mass (m): ");
            scanf("%f", &m);
            printf("Enter velocity (v): ");
            scanf("%f", &v2);
            ke = 0.5 * m * v2 * v2;
            printf("Kinetic Energy = %.2f J\n", ke);
            break;

        case 3:
            printf("Enter mass1 (m1): ");
            scanf("%f", &m1);
            printf("Enter mass2 (m2): ");
            scanf("%f", &m2);
            printf("Enter distance (d): ");
            scanf("%f", &d);
            f = G * m1 * m2 / (d * d);
            printf("Gravitational Force = %.4e N\n", f);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
