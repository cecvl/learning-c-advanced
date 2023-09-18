#include <stdio.h>
#include <string.h>
/* this program takes your full name as input and prints your name.
Then it changes the first letter to X and prints your name.
*/
int main()
{
    char str[20];

    printf("Enter your name:");

    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    str[0] = 'X'; //changes index 0 to X

    printf("%s", str);
    

    return 0;

}