/*
    1. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) 
    using a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and 
    then display the percentage of each student.

    - Dynamic Values :
    - all student : name & Roll Number :
    - all student with also added 3 subject marks :
    - all student : find total and also per : 
*/

#include <stdio.h>

void main()
{
    int s;
    printf("\n Enter Total Number of Student : ");
    scanf("%d", &s);
    char name[s][100];
    int chem_marks[s], maths_marks[s], phy_marks[s], roll_no[s], total[s];
    float per[s];

    for (int i = 0; i < s; i++)
    {
        printf("\n\n Roll Number is : %d \n", i + 1);

        printf("\n Ente Your Name : ");
        scanf("%s", &name[i]);

        printf("\n Chemistry Marks : ");
        scanf("%d", &chem_marks[i]);

        printf("\n Mathematics Marks : ");
        scanf("%d", &maths_marks[i]);

        printf("\n Physics Marks : ");
        scanf("%d", &phy_marks[i]);
    }

    printf("\n\n----------------------------------------------------------------\n");
    printf("\n Resulat With Information About Student : \n");

    for (int i = 0; i < s; i++)
    {
        printf("\n----------------------------------------------------------------\n");
        printf("\n Roll Number : %d \n", i + 1);
        printf("\n Name : %s \n", name[i]);
        printf("\n Chemistry Marks : %d \n", chem_marks[i]);
        printf("\n Mathematics Marks : %d \n", maths_marks[i]);
        printf("\n Physics MArks : %d \n", phy_marks[i]);
        total[i] = chem_marks[i] + maths_marks[i] + phy_marks[i];
        per[i] = total[i] / 3;
        printf("\n Total Marks = %d\n", total[i]);
        printf("\n Per : %.2f \%\n", per[i]);
    }

    printf("\n\n----------------------------------------------------------------\n");
}
