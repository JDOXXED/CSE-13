//Week 6, Lecture 3, May 7 

#include <stdio.h>
#include <limits.h>

int find_max(int *arr, int n);

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter values: ");

    for (int i = 0; i < n; i++){
        scanf("%d", num + i);
    }

    printf("The max value is: %d\n", find_max(num,n));

    return 0;
}

int find_max(int *arr, int size){
    //*arr points to first element
    int max = *arr;

    if (size <= 0){
        return INT_MIN;
    }

    for (int i = 1; i < size; i++){
        if (*(arr + i) > max){
            max = *(arr + i);
        }
    }

    return max;
}