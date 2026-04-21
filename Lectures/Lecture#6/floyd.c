#include <stdio.h>

int main(){
	int input, num =1;
	printf("Enter #of rows: \n");
	scanf("%d",&input);
	
	for(int i = 1; i <= input; i++){
		for (int j = 0; j < i; j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}

return 0;
}
