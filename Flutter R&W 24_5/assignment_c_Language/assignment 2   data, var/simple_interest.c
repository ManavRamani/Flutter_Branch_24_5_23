/* wap to Simple interest.. */

#include<stdio.h>  

void main()   
{   
    // P  : Principal Amount 
    // R  : Rate Per Annum
    // T  : Time In Year
    // SI : Simple Interest

    float P , R , T , SI ;  
    
    printf("\n Calculat Simple Interest : \n");
    printf("\n Enter The Amount : ");
    scanf("%f",&P);
    printf("\n Enter The Rate : ");
    scanf("%f",&R);
    printf("\n Enter The Time in Year  : ");    
    scanf("%f",&T);

    SI = (P*R*T)/100;   
    
    printf("\n\n Simple Interest is : %f", SI);  

}  
