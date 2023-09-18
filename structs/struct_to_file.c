#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id_number;
    char fname[30];
    char lname[30];
}person;

int main()
{
    FILE *outfile;

    outfile = fopen("details.csv", "a");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit(1);
        //printf("Error opening file");
    };

    person customer = {1, "Give", "Zi"};
   //fprintf(outfile, "ID Number, First Name, Last Name\n"); 
   fprintf(outfile, "%d, %s, %s\n", customer.id_number, customer.fname, customer.lname);


    fclose(outfile);

}
