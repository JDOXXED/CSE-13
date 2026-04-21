#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	int m = n;
	/* TODO: add code below this line to check if n is a happy number */
	while(n != 4 && n != 1){
		int temp = n;
		int sum = 0;
		//Loop gets a digit, squares it, then adds it to the sum until there are no digits
		while(temp != 0){
			int digit = temp % 10;
			sum += digit * digit;
			temp /= 10;
		}
		printf("%d\n", sum);
		n = sum;
	}

	if(n == 1) 
        printf("%d is a happy number.\n", m);
	else 
        printf("%d is NOT a happy number.\n", m);
	return 0;
}
