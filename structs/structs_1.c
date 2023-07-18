#include <stdio.h>
#include <string.h>

//  take inputs, use a fucntion to display the inputs



struct student{

    int age;
    char name[20];
};

double display(struct student detailsfxn);


int main()
{
    struct student indexone;
    char stringname[20];

    printf("Enter name: ");
    fgets(stringname, sizeof(stringname),stdin);
    strcpy(indexone.name , stringname );
    printf("Enter age: ");
    scanf("%d", &indexone.age);

    //printf("%s", indexone.name);

    display(indexone);

    return 0;
}

double display(struct student detailsfxn){
  //printf("Student Details:\n-----Name:%s-----\nAge:%d", detailsfxn.name, detailsfxn.age);
    printf("Student Details:\n");
    printf("-----Name: %-40s\n-----", detailsfxn.name);
    printf("Age: %-40d\n", detailsfxn.age);
  
};
/*

int main()
{ 
  int java;
  char python[20];

  printf("Enter name; ");
  fgets(python, sizeof(python),stdin);
  printf("Enter age; ");
  scanf("%d", &java);

  printf("%s\n%d",python,java);

  return 0;
}
*/