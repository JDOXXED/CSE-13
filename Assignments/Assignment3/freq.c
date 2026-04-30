#include <stdio.h>

int getMSDigit(int x){
    while (x / 10.0 > 1)
    {
        x /= 10;
    }
    return x/10;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("%d\n", getMSDigit(num));
    


    return 0;
}