// questions..

// Given an integer n, write a program to calculate the n-th prime number, starting from 1.

// Input Format

// A single integer 𝑛.

#include <stdio.h>
#include <math.h>

int Check(int);


int main() {
    
    int n,i;
    int m;
    int count = 0;
    scanf("%d",&n);
    
    if(n>=1){
    
        for(i = 2 ; count < n ; ++i){

            m = Check(i);

            if(m == 1){
                ++count;
            }
        }

        printf("%d",i-1);
    }
    else{
        printf("invalid");
    }
    return 0;
}

int Check(int n){
    
    int flag = 0;
    int prime = 0;
    
        
        for(int i = 2 ; i <= sqrt(n) ; ++i){
            
            if(n%i == 0){
                
                flag = 1;
                
            }
        }
        if(flag == 0){
            prime = 1;
        }


    
    return prime;
  
}
