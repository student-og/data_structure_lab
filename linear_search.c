#include <stdio.h>


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, target;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the target value: ");
    scanf("%d", &target);

    
    int result = linearSearch(arr, n, target);

    
    if (result != -1) {
        printf("Target found at index %d.\n", result);
    } else {
        printf("Target not found.\n");
    }

    return 0;
}
