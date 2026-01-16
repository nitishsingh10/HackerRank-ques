// question  

// Given an array of integers and a target value K, determine the index of the last occurrence of K in the array.

// Indexing is 0-based
// If the element does not exist in the array, print -1
// Input Format

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers
// Third line: An integer K, the element to search for

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,k;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i = 0 ; i < n ; ++i){
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&k);
    
    int index = -1;
    
    for(int i = 0 ; i < n ; ++i){
        
        if(a[i] == k){
            index = i;
        }
    }
    
    printf("%d",index);
    return 0;
}