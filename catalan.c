#pragma warning(disable : 4996)
#include <stdio.h>

int catalanRecursief(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return ((2.0 * ((2 * n) - 1)) / (n + 1)) * (catalanRecursief(n - 1));
	}
}


int main(void){
	int n;
	printf("Catalan printer\n\n");
	printf("What catalan number do you want to calculate? ");
	scanf("%d", &n);

	/*catalanRecursief(n);*/

	printf("Catalan number: %d > %d", n, catalanRecursief(n));
	
	getchar();
	return(0);
	
}

