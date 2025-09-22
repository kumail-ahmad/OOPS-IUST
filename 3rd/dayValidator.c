#include <stdio.h>

int isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int d, m, y, valid = 1;
    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter date (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &d, &m, &y);

    if (m < 1 || m > 12) valid = 0;
    else {
        if (m == 2 && isLeap(y)) daysInMonth[2] = 29;
        if (d < 1 || d > daysInMonth[m]) valid = 0;
    }

    if (!valid) {
        printf("Invalid date\n");
        return 0;
    }
    printf("Valid date\n");

    int totalDays = d;
    for (int i = 1; i < m; i++) totalDays += daysInMonth[i];
    totalDays += (y - 1) * 365 + (y - 1)/4 - (y - 1)/100 + (y - 1)/400;
    int day = totalDays % 7;

    switch(day) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }
    return 0;
}