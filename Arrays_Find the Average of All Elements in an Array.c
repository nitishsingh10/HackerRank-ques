// questions 

// Given an array of integers, calculate the average of all elements in the array.

// The average must be computed as the sum of all elements divided by N and printed as a floating-point value.

// Input Format

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers
// Constraints

// 1 ≤ N ≤ 10⁵
// −10⁹ ≤ A[i] ≤ 10⁹
// Output Format

// Print the average of the array elements as a floating-point value.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i = 0 ; i < n ; ++i){
        scanf("%d",&a[i]);
    }
    
    double avg = 0;
    
    for(int i = 0 ; i<n ; ++i){
        
        avg = (avg + a[i]);
    }
    
    printf("%lf",avg/n);
    return 0;
}
