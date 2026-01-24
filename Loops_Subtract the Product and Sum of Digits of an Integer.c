// question 

// Given an integer n, calculate the product of its digits and the sum of its digits, then print the difference between the product and the sum.

// Difference = (Product of digits) − (Sum of digits)
// Input Format

// A single integer: n

// Constraints

// 1 ≤ 𝑛 ≤ 10^5
// 1 ≤ n ≤ 10^5
// Output Format

// Print a single integer representing: (product of digits of n) − (sum of digits of n)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n;

    scanf("%d", &n);

    int sum = 0;
    int product = 1;
    
    if (n == 0) {
        product = 0;
    }

    int temp = n;
    
    while (temp > 0){
        
        int digit = temp % 10;
        
        sum += digit;
        
        product *= digit;
        temp /= 10;
    }

    printf("%d\n", product - sum);

    return 0;
}