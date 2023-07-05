/*
    1. Enter the marks of 1 students in Chemistry, Mathematics and Physics (each out of 100) 
    using a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and 
    then display the percentage.
*/

#include <stdio.h>
void main()
{
    char name;
    int chem_marks, maths_marks, phy_marks, roll_no, total;
    float  per;

    printf("\n Enter student Roll No. : ");
    scanf("%d", &roll_no);

    printf("\n Enter Student Name : ");
    scanf("%s", &name);

    printf("\n Enter Chemistry Marks : ");
    scanf("%d", &chem_marks);

    printf("\n Enter Mathematics Marks : ");
    scanf("%d", &maths_marks);

    printf("\n Enter Physics Marks : ");
    scanf("%d", &phy_marks);

    total = chem_marks+maths_marks+phy_marks;
    printf("\n Total Marks : %d",total);

    per = total/3;
    printf("\n Per : %.2f",per);

}