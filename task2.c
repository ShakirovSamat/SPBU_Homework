#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	int answer = 0;
	int signOfAnswer;

	printf("The program finds the incomplete quotient a / b\nEnter a = ");
	scanf_s("%d",&a);

	printf("Enter b = ");
	scanf_s("%d", &b);

	if (b == 0)
	{
		printf("You can't divide by zero");
		return 0;
	}
	else if (a * b > 0)
	{
		signOfAnswer = 1;
	}
	else{
		signOfAnswer = -1;
	}
	a = abs(a);
	b = abs(b);
	while (a >= b)
	{
		a -=b;
		answer +=1;
	}

	printf("The incomplete quotient = %d", answer * signOfAnswer);

	return 0;
	 
}