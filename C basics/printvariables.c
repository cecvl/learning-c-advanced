#include <stdio.h>

int main(){
    char name[8];
    int age;
    int phneNo;
    printf("Enter name: ");
    scanf("%s", name); //remove the & sign before name
    printf("Enter age and phone number: ");
    scanf("%d %d", &age, &phneNo);
    printf("\nContact saved.");
    printf("\nName: %s\nAge: %d\nPhone number: %d", name, age, phneNo);
    return 0;

}