#include <stdio.h>
#include <string.h>

//take inputs, use a function to display the inputs

typedef struct{
    int age;
    char name[20];
  }Student;

void display(Student form_one);

int main()
{
    Student _admitted;

    printf("Enter name: ");
    fgets(_admitted.name, sizeof(_admitted.name),stdin);
    strcpy(_admitted.name , _admitted.name );
    printf("Enter age: ");
    scanf("%d", &_admitted.age);

    display(_admitted); //call function

    return 0;
}

void display(Student form_one){
    printf("-----Name: %-40s\n-----", form_one.name);
    printf("Age: %-40d\n", form_one.age);
};
