#include <stdio.h>
#include <string.h>


/* struct is a collection of variables (can be of different types) under a single name
*/


struct Person{
    int age;
    
    }person1;

   int main()
    {
        printf("Enter your age : ");
        //fgets(person1.birthdate, sizeof(person1.birthdate), stdin);
        scanf("%d", &person1.age);
        //strcpy(person1.month, "October");
        
        printf("AGE %d", person1.age);


        return 0;
    };
    