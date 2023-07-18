#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks>=0 && marks<=40){
        printf("Grade is D");
    }else if(marks>=41 && marks<=59){
        printf("Grade is C");
    }else if(marks>=60 && marks<=69){
        printf("Grade is B");
    }else if(marks>=70 && marks<=100){
        printf("Grade is A");
    }else{
        printf("Please enter valid marks");
    }/* how do you return to the start of program after the last else 
    statement */

    return 0;
}