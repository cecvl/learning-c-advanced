#include <stdio.h>
/*This program takes input of five marks and calculates the average mark
*/

int main()
{
    int marks[5], sum = 0 , average;//average can be float data type
  
    printf("Enter five marks:");
    
    for(int i=0; i<5 ; i++){
        scanf("%d", &marks[i]); //input five marks
    }
    for(int i=0 ; i<5 ; i++){
        sum = sum + marks[i];  //sum of array elements
    }
    printf("Total Marks is %d",sum);

    average = sum/5;  //calculate average

    printf("\nAverage Mark is %d",average);

    return 0;
}