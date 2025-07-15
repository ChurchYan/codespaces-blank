#include <stdio.h>

int return_max(int [], int);

int main(void){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {-10, -20, -3, -4};
    int arr3[] = {42};
    int arr4[] = {};
    int arr5[] = {5, 5, 5, 5};

    printf("Test 1: %d\n", return_max(arr1, 5)); // Expected: 5
    printf("Test 2: %d\n", return_max(arr2, 4)); // Expected: -3
    printf("Test 3: %d\n", return_max(arr3, 1)); // Expected: 42
    printf("Test 4: %d\n", return_max(arr4, 0)); // Expected: 0
    printf("Test 5: %d\n", return_max(arr5, 4)); // Expected: 5

    return 0;
}

int return_max( int arr[], int n){
    if (n == 0) {
        return 0;
    }
    int max = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
    
}