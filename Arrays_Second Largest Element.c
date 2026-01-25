// question 

// find the second largest number from the given array

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    
    if (n < 2) return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            if (largest != INT_MIN) {
                secondLargest = largest;
                found = 1;
            }
            largest = arr[i];
        } 
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
            found = 1;
        }
    }

    return found ? secondLargest : -1;
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}