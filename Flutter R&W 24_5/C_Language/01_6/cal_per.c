/* wap to get 7 subject marks and find per.. */

#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,s6,s7,m_marks,t_marks=700;
    float per;

    printf(" Enter 1st Subject Mark : ");
    scanf("%d",&s1);
    printf(" Enter 2nd Subject Mark : ");
    scanf("%d",&s2);
    printf(" Enter 3rd Subject Mark : ");
    scanf("%d",&s3);
    printf(" Enter 4th Subject Mark : ");
    scanf("%d",&s4);
    printf(" Enter 5th Subject Mark : ");
    scanf("%d",&s5);
    printf(" Enter 6th Subject Mark : ");
    scanf("%d",&s6);
    printf(" Enter 7th Subject Mark : ");
    scanf("%d",&s7);

    m_marks = s1+s2+s3+s4+s5+s6+s7;
    printf(" Total Marks : %d\n",m_marks);

    per = (m_marks*100)/t_marks;
    printf(" Per : %.2f\n",per);

    if(per >= 50 && per <= 59)
    {
        printf(" You'r Pass : %.2f\n",per);
    }
    else if(per >= 60 && per <= 69)
    {
        printf(" You'r Great perormance : %.2f\n",per);
    }
    else if(per >= 70 && per <= 79)
    {
        printf(" You'r 2nd Class : %.2f\n",per);
    }
    else if(per >= 80 && per <= 89)
    {
        printf(" You'r 1st Class : %.2f\n",per);
    }
    else if(per >= 90 && per <= 100)
    {
        printf(" You'r 1st Distinction : %.2f\n",per);
    }
    else{
        printf("You'r fail... Sorry Retry...");
    }

}