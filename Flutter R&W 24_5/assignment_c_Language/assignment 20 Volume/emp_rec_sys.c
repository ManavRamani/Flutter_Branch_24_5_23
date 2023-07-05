/*
    2.WAP to employee record system using structure. Consider below mentioned attributes in Employee’s
        structure :
        - emp_id
        - emp_name
        - emp_age
        - emp_role
        - emp_city
        - emp_experience
        - emp_company_name
*/

#include <stdio.h>

struct emp_rec_sys
{
    int emp_id, emp_age, emp_experience;
    char emp_name[50], emp_role[25], emp_city[30], emp_company_name[50];
} e1;
void main()
{
    printf("\n Enter Employee Information : \n");

    printf(" Enter Employee Id : ");
    scanf("%d", &e1.emp_id);
    printf(" Enter Employee Name : ");
    scanf("%s", &e1.emp_name);
    printf(" Enter Employee Age : ");
    scanf("%d", &e1.emp_age);
    printf(" Enter Employee Role : ");
    scanf("%s", &e1.emp_role);
    printf(" Enter Employee City : ");
    scanf("%s", &e1.emp_city);
    printf(" Enter Employee Experience In year : ");
    scanf("%d", &e1.emp_experience);
    printf(" Enter Employee Company Name : ");
    scanf("%s", &e1.emp_company_name);

    printf("\n Thanks For Your Information... \n");

    printf("\n Employee Information : \n");

    printf("\n Employee Id : %d", e1.emp_id);
    printf("\n Employee Name : %s", e1.emp_name);
    printf("\n Employee Age : %d", e1.emp_age);
    printf("\n Employee Role : %s", e1.emp_role);
    printf("\n Employee City : %s", e1.emp_city);
    printf("\n Employee Experience : %d - Year", e1.emp_experience);
    printf("\n Employee Company Name : %s", e1.emp_company_name);
}