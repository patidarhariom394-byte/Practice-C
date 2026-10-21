#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    // Step 1: Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 2: Sort the array in ascending order using Bubble Sort
    for(i = 0; i < 10 - 1; i++) {
        for(j = 0; j < 10 - i - 1; j++) {
            // Swap if the current element is greater than the next element
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 3: Display the sorted array
    printf("\nNumbers in ascending order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}