#include <stdio.h>

int main() {
    int age[5];
    
    
    printf("Enter age: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &age[i]); // Enter five values   
    }
     for (int i = 0; i < 5; ++i) {
        printf("%d  ", age[i]); // print five values   
    }
    //printf("%d\n", age[0]);
    return 0;
}




