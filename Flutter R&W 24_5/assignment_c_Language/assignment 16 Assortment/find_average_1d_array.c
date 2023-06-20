/*
    1-WAP to find average of 1D array :-
*/

#include <stdio.h>

void main() {
    int i, arrNum1[5];
    float average, sum = 0;

    printf("\nEnter the Index of the array : \n");

    for (i = 0; i < 5; i++) 
    {
        printf("index : %d : ", i);
        scanf("%d", &arrNum1[i]);
        sum += arrNum1[i];
    }
    printf("Sum Of Index of value is : %.2f \n",sum);
    average = sum / 5;
    printf("The average of the array is: %.2f\n", average);

}
