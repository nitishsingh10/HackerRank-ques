// # question is : 
// In the ancient kingdom of Zabiria, there exists a magical gate known as the Prime Gate.

// The gate reacts differently depending on the nature of the number it receives:

// It opens when given a Prime number
// It remains closed when given a Composite number
// It stays inactive when given a number that is neither Prime nor Composite
// A young programmer Omkar has been chosen to guard the gate. Every day, the gate provides a natural number.
// Omkar must determine the correct nature of the number so the gate behaves accordingly.

// Your task is to help Omkar by writing a program that checks whether the given number is Prime, Composite, or Neither.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    
    int flag =0;
    scanf("%d",&n);
    
    if(n>1){
        
        for(int i =2; i<=sqrt(n) ; ++i){
            
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        
        if(flag == 1){
            printf("Composite");
        }
        else{
            printf("Prime");
        }
    }
    else{
        printf("None");
    }
    
    
    return 0;
}