#include <stdio.h>


int main(){
   int age[5] = {21, 21, 23, 34, 45 };//assign values
   double amount[] = {2.2, 2.3, 4.1, 4.5};

   age[2] = 33; //assigning a new value using index
   amount[3] = 2.2;
   printf("%d %d %d", age[2],age[3],age[4]); //arrayName[index]
   printf("%f", amount[3]); 

}

