#include <stdio.h>

int main(){
	int userInteger;
	printf("Enter an integer: ");
	scanf("%d", &userInteger);
	
	int counter =1;
	do {
		printf("%d", counter);
		counter++;	
	} while (counter < userInteger);
	
	return 0;
}
