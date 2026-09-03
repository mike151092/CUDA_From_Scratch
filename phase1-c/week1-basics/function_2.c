#include <stdio.h>

int factorial(int n){
	int result = 1;
	for(int i =1; i <= n; i++){
		result = result * i;
	}
	return result;
}


int main(){
	int a = factorial(5);
	int b = factorial(7);
	int c = factorial(1);
	int d = factorial(20);

	printf("The factorial of 5 is: %d\n", a);
	printf("The factorial of 7 is: %d\n", b);
	printf("The factorial of 1 is: %d\n", c);
	printf("The factorial of 20 is: %d\n", d);
	return 0;
}
