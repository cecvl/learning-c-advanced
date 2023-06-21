#include <stdio.h>


// loop through and print the elements of an array
int main()
{
   double prices[] = {5.0, 10.0, 15.0, 25.0};

   printf("%d bytes\n", sizeof(prices)); //bytes used by array elements

   for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
   {
    printf("$%.2lf\n", prices[i]);
   }
}