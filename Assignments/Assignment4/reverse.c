/* Reversing an array using pointers */

#include <stdio.h>

void reverseArray(int *arr, int size) {
    // TODO: reverse the array arr using pointers 
    /*
    Implementation
    --------------
    switch first element of array with last,
    switch second element of array with second to last and so on

    f = first half elements - starts at first address, goes to middle
    s = second half elements - starts at last address, goes to middle
    mp = midpoint - size / 2 (array of size 5 and 4 both have 2 iterations)

    examples:
    arr[5] = 1 2 3 4 5
    iterations: 2
    switch 1 and 5
    switch 2 and 4

    iterations: 2
    arr[4] = 1 2 3 4
    switch 1 and 4
    switch 2 and 3

    */

    int *f = arr;
    int *s = arr + (size - 1);
    int it = size / 2;

    for (int i = 0; i < it; i++){
        //Save value of last element
        int temp = *s;
        //Assign last element the value of first, Assign first the value of last element
        *s = *f;
        *f = temp;
        //Move to next elements
        f++;
        s--;
    }   
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", arr+i);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);    

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
