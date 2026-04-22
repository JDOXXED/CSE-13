/* Implement a mirrored increasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

        *
      * *
    * * *
  * * * *
* * * * *

*/

/*
n = 5

print space 4 times
print * one time

print space 3 times
print * 2 times

  print n - 1 spaces
  print n stars
print new line
*/
#include<stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");

  /* TODO: read the value for n and print the first n rows of the above pattern */
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    for (int j = 1; j <= n-i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}