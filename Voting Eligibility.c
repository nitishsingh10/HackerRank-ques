//question

//write a program to check if a person is eligible to vote or not

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verification(int age){
    
    if(age<18){
        printf("Not Eligible");
    }
    else{
        printf("Eligible");
    }
    
    return 0;
}

int main() {
    
    int age;
    scanf("%d",&age);
    
    if(age>=0 && age<=150){
        verification(age);
    }
    else{
        printf("Invalid Input !");
    }
    return 0;
}