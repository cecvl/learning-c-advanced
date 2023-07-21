#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    char fname[30];
    char lname[30];
}person;

int main()
{
    FILE *outfile;

    outfile = fopen("name.txt", "a+");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit(1);
        //printf("Error opening file");
    };

    person customer = {1, "CC", "Ramos"};
    fwrite(&customer, sizeof(person), 1, outfile);

    if (fwrite != 0)
    {
        printf("Contents to file written successfully !\n");
    }
    else
    {
        printf("Error writing file !\n");
    }


    fclose(outfile);

}
