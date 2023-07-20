#include <stdio.h>

//use of typedef
typedef struct menuitems{
    float amount;
    char name[20];
}item1;

float calculator(float amount){
    float total;
    int  price = 100;

    total = amount * price;
    return total;
}

int main()
{
    item1 item; //declaring a variable of type item1.
    
    printf("Enter amount of burgers: ");
    scanf("%f", &item.amount);
    printf("Total price: %.lf shillings", calculator(item.amount));
}