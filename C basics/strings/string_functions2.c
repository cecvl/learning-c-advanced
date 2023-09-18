#include <stdio.h>
#include <string.h>
/* this program takes two strings as inputs and prints out the larger 
one 
*/

int main()
{
    char string1[20], string2[20];

    printf("Enter two words:");

    fgets(string1, sizeof(string1), stdin); //input two strings
    fgets(string2, sizeof(string2), stdin);

    if (strlen(string1) > strlen(string2)) //use strlen() to get length of strings
    {
        printf("The larger string is: %s", string1);
    }
    else{
        printf("The larger string is: %s", string2);
    }

    return 0;
}