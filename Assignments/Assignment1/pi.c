#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	double pi = 0.;
	/* TODO: Add the code below to compute value of pi using the formula given in the pdf */
	double power = 1.0;
	for(int i = 0; i <= n; i++){
		double term = 4.0/(8 * i + 1) - 2.0/(8 * i + 4) - 1.0/(8 * i + 5) - 1.0/(8 * i + 6);
		pi += term * power;
		power /= 16.0;
	}

	printf("PI = %.10f\n", pi);
	return 0;
}
