/*
    1. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a Union named 
    Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
*/

#include <stdio.h>

union StudentInfo {
    int rollNo;
    char name[50];
    struct {
        int subject1;
        int subject2;
        int subject3;
    } marks;
    int total;
};

void main() {
    union StudentInfo student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Subject 1 Marks: ");
    scanf("%d", &student.marks.subject1);

    printf("Enter Subject 2 Marks: ");
    scanf("%d", &student.marks.subject2);

    printf("Enter Subject 3 Marks: ");
    scanf("%d", &student.marks.subject3);

    student.total = student.marks.subject1 + student.marks.subject2 + student.marks.subject3;

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Subject 1 Marks: %d\n", student.marks.subject1);
    printf("Subject 2 Marks: %d\n", student.marks.subject2);
    printf("Subject 3 Marks: %d\n", student.marks.subject3);
    printf("Total Marks: %d\n", student.total);

}
