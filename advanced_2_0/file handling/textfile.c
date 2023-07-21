#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
}number;

int main()
{
    number e;
    //e.x = 10;

    printf("Enter a number: ");
    scanf("%d", &e.x);

    printf("Welcome Cecil!\n\n");
    FILE *output_num;
    output_num = fopen("textfile.txt", "a+");
    
    fprintf(output_num, "Addition: %d\n", e.x);
    

    
    fclose(output_num);

    return 0;

}