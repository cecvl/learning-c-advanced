#include <stdio.h>

//datatype arrayName[arraySize];

int main(){
   int age[5] = {21, 21, 23, 34, 45 };//assign values

   age[2] = 33; //assigning a new value using index
   printf("%d %d %d", age[2],age[3],age[4]); //arrayName[index]


}

