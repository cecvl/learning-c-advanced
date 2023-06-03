#include <stdio.h>

int main()
{
    int age[2];  //declare array
    printf("Enter two values:");

    scanf("%d", &age[0]); //assigning values to array indexes
    scanf("%d", &age[1]);

    printf("Your 2 values are:\n%d\n%d",age[1],age[0]);
}