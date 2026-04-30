#include <stdio.h>

int getMSDigit(int x){
    while (x / 10 >= 1)
    {
        x /= 10;
    }
    return x;
}

int main(){
    int num;
    int freq[10] = {0};
       
    while (scanf("%d", &num) != EOF)
    {
        int msd = getMSDigit(num);
        freq[msd]++;
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%d:%d ", i, freq[i]);
    }
    printf("\n");

    return 0;
}