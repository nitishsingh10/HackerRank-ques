// question...

// Given an array of integers and a value K, count how many elements in the array are strictly greater than K.

// Input Format

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers
// Third line: An integer K

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,k;
    int count = 0;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i = 0 ; i<= n-1 ; ++i){
        
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&k);
    
    for(int i = 0 ; i<= n-1 ; ++i){
        
        if(a[i] > k){
            ++count;
        }
    }
    
    printf("%d",count);
    
    return 0;
}
