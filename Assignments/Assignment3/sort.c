#include <stdio.h>

void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void merge_sort(int arr[], int left, int right) {
    /* TODO: Implement merge sort by using divide and conquer recursively. This function should call the merge sub-routine. */ 
    // base case
    if (left >= right) {
        return;
    }

    int mid = (left + right)/2;
    //split
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    //final call
    merge(arr, left, mid, right);
}

void merge(int arr[], int left, int mid, int right) {
    /* TODO: Implement the merge logic. */
    //left & right halves
    int l1 = mid - left + 1;
    int r1 = right - mid;

    //temps
    int L[l1];
    int R[r1];

    for (int i = 0; i < l1; i++){
        L[i] = arr[left + i];
    }

    for (int j = 0; j < r1; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    //merge back into array
    while(i < l1 && j < r1){
        //Choose smaller element
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //copy remaining elements
    while (i < l1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < r1){
        arr[k] = R[j];
        j++;
        k++;
    }
}