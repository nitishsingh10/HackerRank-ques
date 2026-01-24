//question..

// A Harshad Number is a number that is divisible by the sum of its digits.

// Compute the sum of the digits of the number.
// If the number is divisible by this sum, it is a Harshad Number.
// Otherwise, it is not a Harshad Number.
// Input Format

// A single integer 𝑁.

// Constraints

// 1 <= N <= 106

// Output Format

// Print,"[N] is a harshad number" if N is a Harshad number.
// Print, "[N] is not a harshad number" otherwise.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int t = n/1000;
    int h = n/100-(t*10);
    int tens = n/10-(t*100 + h*10);
    int u = n-(t*1000 + h*100 + tens*10);
    
    int res = t+h+tens+u;
    
    if(n%res == 0){
        printf("%d is a harshad number",n);
    }
    else{
        printf("%d is not a harshad number",n);
    }
    
    return 0;
}