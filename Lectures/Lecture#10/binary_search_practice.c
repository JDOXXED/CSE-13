/* Binary search */

#include <stdio.h>

int binary_search(int num[], int left, int right, int v); 

int main() {
    int num[5], loc, val;
    printf("Enter 5 values in sorted order: ");
    for(int i=0; i < 5; i++) {
        scanf("%d", num+i);
        printf("num[%d] = %d\n", i, num[i]);
    }
    
    printf("Enter the value you wish to search for: ");
    scanf("%d", &val);
    loc = binary_search(num, 0, 4, val);
    if(loc==-1)
        printf("Value not found.\n");
    else printf("Value found at index %d\n", loc);
    
    return 0;
}

int binary_search(int num[], int left, int right, int v) {
    /* TODO: implement binary search */
    int mid = (right - left)/2;

    if (left > right){
        return -1;
    } else if (num[mid] == v){
        return mid;
    } else if (num[mid] > v){
        return binary_search(num, left, mid -1, v);
    } else {
        return binary_search(num, mid + 1, right, v);
    }
}