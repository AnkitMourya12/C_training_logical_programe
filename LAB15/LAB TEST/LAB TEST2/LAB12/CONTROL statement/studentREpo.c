
#include <stdio.h>

int main() {
    char name[50];
    int rollNumber;
    float marks[5];
    float totalMarks = 0;
    char grade;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        totalMarks += marks[i];
    }

    float percentage = (totalMarks / 500) * 100;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("*****************************************\n");
    printf("*********** STUDENT REPORT CARD **********\n");
    printf("*****************************************\n");
    printf("Name: %s", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("*****************************************\n");
    printf("Subject-wise Marks:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i+1, marks[i]);
    }

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("*****************************************\n");

    return 0;
}
