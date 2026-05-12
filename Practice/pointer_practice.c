#include <stdio.h>

int main() {
    //Get # of elements
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    //Initialize array
    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", arr+i);
    }
    //Print original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
  
    //Print pointers of array
    int *p = arr;

    printf("Value of element 0: %d\n", *p);
    printf("Address of element 0: %p\n", p);

    //Get last addres
    p = p + (n - 1);

    printf("Value of element %d: %d\n", n, *p);
    printf("Address of element %d: %p\n", n,p);

    //change value of last address to 100
    *p = 100;
    printf("Value of element %d: %d\n", n, *p);
    printf("Address of element %d: %p\n", n, p);

    /*
    printf("Pointers of each element:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d holds value %d at: %p\n", i, *p, p);
        p++;
    }
    */

    return 0;
}
