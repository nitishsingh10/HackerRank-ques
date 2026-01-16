//question

// Given an array of integers, replace every negative number in the array with 0 and print the updated array.

// The relative order of elements must remain unchanged.

// Input Format

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i = 0 ; i <= n-1 ; ++i){
        scanf("%d",&a[i]);
        
    } 
    
    for(int i = 0 ; i < n ; ++i){
        if(a[i] < 0){
            a[i] = 0;
        }
    }
    
    for(int i = 0 ; i < n ; ++i){
        printf("%d ",a[i]);
    }
    return 0;
}
