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
    
    // nested loop for sorting
    
    for(int i = 0 ; i < n-1 ; ++i){
        
        for(int j = 0 ; j < n-1 ; ++j){
            
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
    
    int k = -1;
    
    for(int i = 0 ; i < n-1 ; ++i){
        
        if(a[i] != a[i+1]){
            k = a[i+1];
            break;
        }

    }
    
    printf("%d",k);
    
    return 0;
}