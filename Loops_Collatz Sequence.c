// question :

// Write a program to generate the Collatz sequence for a given positive integer n. Starting with any positive integer n, Collatz sequence is defined corresponding to n as the numbers formed by the following operations :

// If n is even, then n = n / 2.
// If n is odd, then n = 3*n + 1.
// Repeat above steps, until it becomes 1.

#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    printf("%d", n);
    
    for( ; n != 1 ;  ){
        
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = 3*n + 1;
        }
        
        printf(" -> %d",n);
        
    }
    return 0;
}