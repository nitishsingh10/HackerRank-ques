// question. 

// You are given an array of N integers. Compute the difference between the sum of elements stored at even indices and the sum of elements stored at odd indices.

// Use 0-based indexing
// Difference = (sum of even-index elements) − (sum of odd-index elements)
// Input Format

// First line: Integer N
// Second line: N space-separated integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    long long a[n];
    
    for(int i = 0 ; i < n ; ++i){
        
        scanf("%lld",&a[i]);
        
    }
    
    long long sumEven = 0;
    long long sumOdd = 0;
    
    
    for(int i = 0 ; i < n ; ++i){
        
        if(i%2){
            sumOdd = sumOdd + a[i];
        }
        else{
            sumEven = sumEven + a[i];
        }
        
    }
    
    long long diff = sumEven - sumOdd;
    
    printf("%lld",diff);
    
    
    return 0;
}
