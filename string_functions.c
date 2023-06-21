#include <stdio.h> 

#include <string.h>

int main()
{
    char food[] = "Pizza";

    printf("%zu", strlen(food)); //5

    char bestFood[strlen(food)]; 

    strcpy(bestFood, food);

    printf("\n%s", bestFood); //Pizza

    printf("\n%zu", strlen(bestFood)); //5
    
    return 0;
}