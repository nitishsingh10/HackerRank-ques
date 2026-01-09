// question : 


// Submissions
// Leaderboard
// Discussions
// Three contenders— X, Y, and Z are facing off in a duel of divisibility. Your task is to determine the result of this epic showdown by analyzing the relationship between X and its challengers, Y and Z.

// The rules of the duel are as follows:

// If X is divisible by Y, the output should be "Y triumphs over X!".
// If X is divisible by Z, the output should be "Z outsmarts X!".
// If X is divisible by both Y and Z, the output should be "X defeats all!".
// If X is not divisible by either Y or Z, the output should be "X remains undefeated!".
// Input Format

// A single line containing three integers X, Y, and Z

// ANSWER : 

#include <stdio.h>

void Duel(int x, int y, int z) {
    
    if (x%y == 0 && x % z == 0) {
        printf("X defeats all!");
    }

    else if (x%y == 0) {
        printf("Y triumphs over X!");
    }

    else if (x%z == 0) {
        printf("Z outsmarts X!");
    }

    else {
        printf("X remains undefeated!");
    }
}

int main() {
    int x, y, z;
    
    scanf("%d %d %d", &x, &y, &z);
    
    if (x > 0 && y > 0 && z > 0) {
        Duel(x, y, z);
    }
    
    return 0;
}