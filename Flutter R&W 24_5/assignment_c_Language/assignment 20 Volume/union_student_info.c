/*
    1. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100)
    using a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks
    and then display the percentage of each student.
*/

#include <stdio.h>

union StudentInfo
{
    int rollNo;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int total;
    float per;
} s[5];

void main()
{
    union StudentInfo;
    printf("\n ---------------------------------------------------------------- \n");
    
    for (int i = 1; i <= 5; i++)
    {
        printf("\n\t Enter Your Roll Number : ");
        scanf("%d", &s[i].rollNo);
        printf("\n\t Roll Number is : %d\n", s[i].rollNo);

        printf("\n\t Enter Your Name : ");
        scanf("%s", &s[i].name);
        printf("\n\t Name is : %s\n", s[i].name);

        printf("\n\t Enter Chemistry Marks : ");
        scanf("%d", &s[i].chem_marks);
        printf("\n\t Chemistry Marks is : %d\n", s[i].chem_marks);

        printf("\n\t Enter Mathematics Marks : ");
        scanf("%d", &s[i].maths_marks);
        printf("\n\t Mathematics Marks is : %d\n", s[i].maths_marks);

        printf("\n\t Enter Physics Marks : ");
        scanf("%d", &s[i].phy_marks);
        printf("\n\t Physics Marks is : %d\n", s[i].phy_marks);

        s[i].total = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
        printf("\n\t Total Marks is : %d\n", s[i].total);

        s[i].per = s[i].total / 3;
        printf("\n\t percentage is : %.2f\%\n", s[i].per);

        printf("\n ---------------------------------------------------------------- \n");
    }
}
