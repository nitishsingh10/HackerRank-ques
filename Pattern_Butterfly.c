#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    if(n >= 2){
        
        for(int i = 1 ; i <= n ; ++i){
            
            for(int k = 1 ; k <= i ; ++k){
                printf("*");
            }
            
            for(int j = 1 ; j <= 2*(n-i) ; ++j){
                printf(" ");
            }
            
            for(int k = 1 ; k <= i ; ++k){
                printf("*");
            }
            
            
            printf("\n");
            
        }
        
        for(int i = 2 ; i <= n ; ++i){
            
            for(int k = 1 ; k <= n-i+1 ; ++k){
                printf("*");
            }
            
            for(int j = 1 ; j <= 2*i-2 ; ++j){
                printf(" ");
            }
            
            for(int k = 1 ; k <= n-i+1 ; ++k){
                printf("*");
            }
            
            printf("\n");
            
        }
        
        
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}