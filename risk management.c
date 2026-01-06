// You are tasked with building a simple risk management system for an investment advisor. The system evaluates the risk of a portfolio based on the investor's choices and calculates an appropriate risk level. The goal is to determine if the investor's portfolio is low, medium, or high risk, and then provide investment suggestions.

#include <stdio.h>

int main() {
    int age, income, risk;

    scanf("%d", &age);
    scanf("%d", &income);
    scanf("%d", &risk);

    // HIGH RISK PORTFOLIO LOGIC 
    if (age < 30 || 
       ((age >= 30 && age <= 50) && income > 75000 && risk == 3) || 
       (age > 50 && income > 75000 && risk == 3)) {
        
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    
    // LOW RISK PORTFOLIO LOGIC 
    else if ((age > 50 && !(income > 75000 && risk == 3)) || 
             (income <= 30000 && (risk == 1 || risk == 2))) {
        
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    
    // MEDIUM RISK PORTFOLIO LOGIC 
    else if (((age >= 30 && age <= 50) && income <= 75000 && risk == 2) || 
             ((age >= 30 && age <= 50) && income > 75000 && (risk == 1 || risk == 2))) {
        
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    return 0;
}