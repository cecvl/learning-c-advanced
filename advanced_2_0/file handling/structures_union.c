#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* struct is a collection of variables (can be of different types) under a single name
*/


typedef struct{
    int age;
    int passportnum;
    char name[30];
    
    }person;

   int main()
    {
        person first;

        printf("\t\t\tWelcome dear customer\n\n");
        //printf("please proceed\n\n");

        printf("Enter name: ");
        fgets(first.name, sizeof(first.name), stdin);
        printf("Enter age: ");
        scanf("%d, %d", &first.age);
        printf("Enter passport number: ");
        scanf("%d", &first.passportnum);

        FILE *age; //declare pointer to file
        FILE *name;
        FILE *passport;
        
        
        age = fopen("age.dat","a");
        name = fopen("name.txt","a");
        passport = fopen("passport.txt","a");
         

        if(age == NULL)   // not !(fopen) == NULL)
        {
            printf("Error opening file!");
            
        }else 
        {
            printf("Succesfully added.");
        };

        
        fprintf(age, "%d\n", first.age);
        fprintf(name, "%s", first.name);
        fprintf(passport, "%d\n", first.passportnum);

        fclose(age);
        fclose(name);
        fclose(passport);    
        
        return 0;
    };
    