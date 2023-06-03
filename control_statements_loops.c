#include <stdio.h>



int main(){
    int age[5];
    
    for(int i = 0;i < 5; ++i){
        scanf("%d", &age[i]); //enter five values
    }
    for(int i = 0; i < 5; ++i){
        printf("\n%d",age[i]);
    }  //outputs five values
       //write less code

    return 0;
}


