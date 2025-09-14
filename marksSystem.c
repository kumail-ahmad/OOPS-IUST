#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average, percentage;
    char grade;
    
    printf("Enter marks of 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else
        grade = 'F';
    
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    
    return 0;
}
