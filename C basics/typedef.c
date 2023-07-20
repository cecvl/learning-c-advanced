#include <stdio.h>

//example 1



//example 2
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
    item1 item;
    //item.price = 5.99;
    printf("Enter amount of burgers: ");
    scanf("%f", &item.amount);
    printf("Total price: %.lf shillings", calculator(item.amount));
}