/*
    1. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) 
    using a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and 
    then display the percentage of each student.

    - static Values :
    - five student : name & Roll Number :
    - five student with also added 3 subject marks :
    - find total and also per : 
*/

#include <stdio.h>

void main()
{

    char name[5][100] = {"Raj", "Jay", "Neel", "Jaydeep", "heet"};
    int chem_marks[5] = {50, 60, 70, 55, 56}, maths_marks[5] = {50, 60, 70, 55, 56}, phy_marks[5] = {50, 60, 70, 55, 56}, roll_no[5] = {1, 2, 3, 4, 5}, total[5];
    float per[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n----------------------------------------------------------------\n");
        printf("\n Roll Number : %d \n", roll_no[i]);
        printf("\n Name : %s \n", name[i]);
        printf("\n Chemistry Marks : %d \n", chem_marks[i]);
        printf("\n Mathematics Marks : %d \n", maths_marks[i]);
        printf("\n Physics MArks : %d \n", phy_marks[i]);
        total[i] = chem_marks[i] + maths_marks[i] + phy_marks[i];
        per[i] = total[i] / 3;
        printf("\n Total Marks = %d\n", total[i]);
        printf("\n Per : %.2f \%\n", per[i]);
    }

}
