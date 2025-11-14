/*Q.11.Input your name, roll_no and marks in any 4 subjects, calculate total and
percentage of marks and calculate grade of a student as follows:
90 or above – ‘O’ grade
80 or above – ‘A’ grade
70 or above – ‘B’ grade
60 or above – ‘C’ grade
Below 60 - ‘D’ grade
Display the Result Sheet
*/
#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, total, percent;
    char grade;

    // Input
    printf("Enter your name: ");
    scanf(" %[^\n]", name);   // Reads full name with spaces

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of 4 subjects:\n");
    scanf("%f %f %f %f", &m1, &m2, &m3, &m4);

    // Calculations
    total = m1 + m2 + m3 + m4;
    percent = (total / 400) * 100;

    // Grade calculation
    if (percent >= 90)
        grade = 'O';
    else if (percent >= 80)
        grade = 'A';
    else if (percent >= 70)
        grade = 'B';
    else if (percent >= 60)
        grade = 'C';
    else
        grade = 'D';

    // Display Result Sheet
    printf("\n------- RESULT SHEET -------\n");
    printf("Name       : %s\n", name);
    printf("Roll No    : %d\n", roll);
    printf("Marks      : %.2f  %.2f  %.2f  %.2f\n", m1, m2, m3, m4);
    printf("Total Marks: %.2f / 400\n", total);
    printf("Percentage : %.2f%%\n", percent);
    printf("Grade      : %c\n", grade);
    printf("-----------------------------\n");

    return 0;
}
