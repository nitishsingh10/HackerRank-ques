// question..

// You are given an array of integers. Your task is to determine whether the array is sorted in non-decreasing order.

// Input Format

// The first line contains an integer n, the number of elements in the array.
// The second line contains n space-separated integers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    int flag = 1;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i = 0 ; i <= n-1 ; ++i){
        
        scanf("%d", &a[i]);
    }
    
    for(int i = 0 ; i< n-1 ; ++i){
        
        int temp = a[i];
        
        if((a[i+1] < temp)){
            flag = 0;
        }
    }
    
    if(flag == 0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    
    
    return 0;
}