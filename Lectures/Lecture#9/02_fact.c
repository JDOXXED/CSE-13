/* Using gdb to debug recursive functions */
#include <stdio.h>

long fact(int n) {
    if(n==1)                    // Base case
        return n;               
    else {                      // Recursive case
        long ans = fact(n-1);   
    return ans;  
    }
}

int main() {
    int n = 3;
    long ans = fact(n);
    printf("Factorial of %d is %ld\n", n, ans);
    return 0;
}
