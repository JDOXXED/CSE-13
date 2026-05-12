#include <stdio.h>

int main(){

    printf("Enter 4 values for matrix a: ");

    int a[2][2];

    for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    int (*p)[4]; //Pointer of a 2d array of 4 integers
    p = a; //"a" holds the address of element 1 of array a


    return 0;
}