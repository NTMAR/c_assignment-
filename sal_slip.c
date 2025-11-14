/*Q.12.Input Employee's name , age, designation and basic salary. Consider
ta=35% of basic, da= 60% of basic, hra=33% of basic, pf=12% of basic.
alculate gross & net salary. Calculate the grade as follows:
50000/- above – A grade
40000/- above – B grade
25000/- above – C grade
Below 25000/- - D grade
Generate a salary slip.
*/
#include <stdio.h>

int main() {

    char name[50], designation[50];
    int age;
    float basic, ta, da, hra, pf, gross, net;
    char grade;

    // Input Section
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);   // Reads full name with spaces

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Designation: ");
    scanf(" %[^\n]", designation);  // Reads designation with spaces

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Calculations
    ta = 0.35 * basic;
    da = 0.60 * basic;
    hra = 0.33 * basic;
    pf = 0.12 * basic;

    gross = basic + ta + da + hra;
    net = gross - pf;

    // Grade Calculation
    if (net >= 50000)
        grade = 'A';
    else if (net >= 40000)
        grade = 'B';
    else if (net >= 25000)
        grade = 'C';
    else
        grade = 'D';

    // Salary Slip Output
    printf("\n\n********** SALARY SLIP **********\n");
    printf("Employee Name   : %s\n", name);
    printf("Age             : %d\n", age);
    printf("Designation     : %s\n", designation);

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary    : %.2f\n", basic);
    printf("TA (35%%)        : %.2f\n", ta);
    printf("DA (60%%)        : %.2f\n", da);
    printf("HRA (33%%)       : %.2f\n", hra);
    printf("PF (12%%)        : %.2f\n", pf);

    printf("\nGross Salary    : %.2f\n", gross);
    printf("Net Salary      : %.2f\n", net);

    printf("Grade           : %c\n", grade);
    printf("*********************************\n");

    return 0;
}

   
   