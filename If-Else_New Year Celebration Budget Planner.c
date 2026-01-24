// question 


// This New Year, Sharib (an experienced event planner) is planning a celebration and needs your help to determine if they can host it within their budget. Sharib has a list of expenses for different activities and items, along with specific conditions for hosting the celebration. Write a program to evaluate whether Sharib can host the celebration or not.

// Conditions to Host the Celebration:

// The total cost of the celebration must not exceed the budget.
// The number of guests must be greater than 5 and less than or equal to 50.
// At least one of the following conditions must hold:
// The decoration cost is less than 30% of the budget.
// The total food cost is less than 50% of the budget.
// If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
// Input Format

// The input consists of six integers:

// budget: Total budget for the celebration (in dollars).
// numGuests: Number of guests invited.
// foodCostPerGuest: Cost of food per guest (in dollars).
// decorationCost: Cost of decorations (in dollars).
// musicCost: Cost of hiring a DJ or music system (in dollars).
// extraExpenses: Additional expenses for the celebration (in dollars).

#include <stdio.h>

int main() {
    
    int budget,guest,food,decor,music,extra;
    int condition = 0;
    
    scanf("%d", &budget);
    scanf("%d", &guest);
    scanf("%d", &food);
    scanf("%d", &decor);
    scanf("%d", &music);
    scanf("%d", &extra);
    
    
    int TotalCost;
    
    TotalCost = (guest*food) + decor + music + extra;
    
    // Conditions check
    
    if(budget>=TotalCost){
        condition++;
    }
    
    if(guest>5 && guest<=50){
        condition++;
    }
    
    if(decor<(0.3*budget)){
        condition++;
    }
    else if((guest * food)<(0.5*budget)){
        condition++;
    }

    if(guest>25){
        
        if(music<=0){
            condition--;
        }
        
    }
    
    if(condition>2){
        printf("Celebration Approved");
    }
    else{
        printf("Celebration Denied");
    }

    
    return 0;
}