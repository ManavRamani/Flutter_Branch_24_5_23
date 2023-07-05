/*
    1.WAP to student record system using structure.Consider below mentioned attributes in Student’s
        structure :
        - stu_id
        - stu_name
        - stu_age
        - stu_course
        - stu_city
        - stu_std
        - stu_school
*/

#include <stdio.h>

struct std_rec_sys
{
    int stu_id, stu_age, stu_std;
    char stu_name[50], stu_course[50], stu_city[50], stu_school[50];
} s1;

void main()
{
    struct std_rec_sys;

    printf("\n Get Student Information : \n");

    printf(" Enter Your Student Id : ");
    scanf("%d",&s1.stu_id);
    printf(" Enter Your Name : ");
    scanf("%s",&s1.stu_name);
    printf(" Enter Your Age : ");
    scanf("%d",&s1.stu_age);
    printf(" Enter Your Course : ");
    scanf("%s",&s1.stu_course);
    printf(" Enter Your City : ");
    scanf("%s",&s1.stu_city);
    printf(" Enter Your Standard : ");
    scanf("%d",&s1.stu_std);
    printf(" Enter Your School Name : ");
    scanf("%s",&s1.stu_school);
    
    printf("\n Thanks For Your Information.... \n");

    printf("\n This is your Information : \n");

    printf("\n Student Id : %d",s1.stu_id);
    printf("\n Name : %s",s1.stu_name);
    printf("\n Age : %d",s1.stu_age);
    printf("\n Course : %s",s1.stu_course);
    printf("\n City : %s",s1.stu_city);
    printf("\n Standard : %d",s1.stu_std);
    printf("\n School Name : %s",s1.stu_school);
}
