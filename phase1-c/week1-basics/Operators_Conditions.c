#include <stdio.h>

int main(){
	int score = 77;
	
	if (score >= 90){
		printf("The obtained grade is: A\n");
	}else if (score >= 80 && score <= 89){
		printf("The obtained grade is: B\n");
	}else if (score >= 70 && score <= 79){
		printf("The obatined grade is: C\n");
	}else{
		printf("You Failed\n");
	}

	return 0;
}
