#include <stdio.h>

int mult(int a, int b) //user defined fucntion
{
    return a*b;
}

int add(int a, int b)
{
    return a + b;
}

void main ()
{
    printf("Product is %d",mult(5,10)); //calling a fucntion
    printf("\n The sum is %d",add(4,45));
}