// You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

// Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

// Your task is to apply these changes and return the final passcode that will successfully open the vault.


#include <stdio.h>


// using loops

int main() {

    int p[10];
    int i,r;

    for(int i = 0 ; i<=9 ; ++i){
        scanf("%d",&p[i]);
    }
    
    // first
    scanf("%d %d",&i,&r);
    
    p[i] = p[i] + r;
    
    if(p[i] > 9){
        p[i] = p[i]-10;
    }
    
    
    //second
    scanf("%d %d", &i,&r);
    
    p[i] = p[i] + r;
    
    if(p[i] > 9){
        p[i] = p[i]-10;
    }
    
    
    //third
    scanf("%d %d", &i, &r);
    
    p[i] = p[i] + r;
    
    if(p[i] > 9){
        p[i] = p[i]-10;
    }
    
    //print
    
    for(int i = 0 ; i <= 9 ; ++i){
        printf("%d ",p[i]);
    }
    

    return 0;
}
