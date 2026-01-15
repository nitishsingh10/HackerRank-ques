//question 

// conver the time given in 24 hour format to 12 hour format

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int timeCon(int hour,int minutes){
    int converted_hours;
    
    if(hour==0){
            
            converted_hours= hour+12;
            printf("%d:%.2d AM",converted_hours,minutes);
        }

    else if(hour==12){
        printf("%d:%.2d PM", hour, minutes);
    }
    
    else if(hour>12){
        
        converted_hours= hour-12;
        printf("%d:%.2d PM", converted_hours, minutes);
    }
    else{
        printf("%d:%.2d AM", hour, minutes);
    }
    return 0;
}

int main() {
    
    int hour,minutes;
    
    scanf("%d %d", &hour, &minutes);
    
    if((hour>=0 && hour<24)&&(minutes<60 && minutes>=0)){
        
       timeCon(hour,minutes); 
    }
    else{
        printf("Invalid data !");
    }

    return 0;
}
