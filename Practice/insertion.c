#include <stdio.h>

int main(){

    return 0;
}

void insertion_sort(int num, int n){
    for (int i = 1; i < n; i++){
        int j = i - 1;
        int val = num[i];
        
        while(num[j] > val && j){
            num = num[j + 1];
            j--;
        }
        num[j +1] = val;
    }

}