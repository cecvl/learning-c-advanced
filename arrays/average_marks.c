#include <stdio.h>
/*This program calculates the total marks and the average mark in a
students' exam
*/

int main()
{
    int marks[5], sum = 0 , _average;
  
    printf("Enter five marks:");
    
    for(int i=0; i<5 ; i++){
        scanf("%d", &marks[i]); //input five marks
    }
    for(int i=0 ; i<5 ; i++){
        sum = sum + marks[i];  //sum of array elements
    }
    printf("Total Marks is %d",sum);

    _average = sum/5;  //calculate average

    printf("\nAverage Mark is %d",_average); /* use of int data type because the decimals
     are not needed in output
    */

    return 0;
}