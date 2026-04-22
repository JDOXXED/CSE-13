/* Implement a decreasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter n (number of rows): ");

    /* TODO: read the value for n and print the first n rows of the above pattern */
    scanf("%d",&n);

    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}