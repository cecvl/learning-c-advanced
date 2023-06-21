#include <stdio.h>
#include <string.h>

int main()
{
  char cars[][10] = {"Mustang", "Corvette", "Camaro"};

  strcpy(cars[0], "Tesla"); //new string to index 0

  for( int i = 0; i < sizeof(cars)/sizeof(cars[1]); i++) /*
  divide by sizeof(cars[1]) because you pick one element from the array
  */ 
  {
    printf("%s\n", cars[i]);
  } 
   
    return 0;
}
