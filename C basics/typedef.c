#include <stdio.h>

//use of typedef
typedef struct{
    int amount;
    char name[20];
}menuitem;

int calculator(int amount){
    int total;
    int  price = 100;

    total = amount * price;
    return total;
}

int main()
{
    menuitem item1; //declaring struct of type menuitem. 
    
    printf("Enter amount of burgers: ");
    scanf("%d", &item1.amount);
    printf("Total price: %d shillings", calculator(item1.amount));
}