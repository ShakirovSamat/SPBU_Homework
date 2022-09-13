#include <stdio.h>

int main(){

	int x, answer;
		
	printf("The program findss answer for x^4 + x^3 + x^2 + x + 1\n");

	printf("Enter x = ");
	scanf_s("%d", &x);
	
	int squerX = x*x;
	answer = squerX * (squerX + x) + squerX + x + 1;
	printf("Answer = %d", answer);	
	return 0;
}