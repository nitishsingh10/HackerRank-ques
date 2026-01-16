// questions. 

// You are given an array of integers and a target element. Your task is to count how many times the target element occurs in the array and output that count.

// Input Format

// The first line contains an integer n, the number of elements in the array.
// The second line contains n space-separated integers representing the array elements.
// The third line contains a single integer, the target element whose occurrences you need to count.


#include <stdio.h>

int main() {
    
    int n,k;
    
    scanf("%d",&n);
    int a[n];
    
    for(int i = 0 ; i < n ; ++i){
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&k);
    
    int count = 0;
    
    for(int i = 0 ; i < n ; ++i){
        
        if(a[i] == k){
            ++count;
        }
    }
    
    printf("%d",count);
    
    return 0;
}