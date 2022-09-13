#include <stdio.h>

int main(){

	int n;
	int amountOfZero = 0;

	printf("The program counts amount of zero nums in an array\n");

	printf("Enter the length of an array = ");
	scanf_s("%d",&n);

	int ar[n];

	for(int i = 0; i < n; ++i){
		printf("Enter %d num = ", i + 1);
		scanf_s("%d", &ar[i]);
	}
	
	for(int i = 0; i < n; ++i){
		if (ar[i] == 0){
			++amountOfZero;
		}
	}
	printf("Amount of zero nums = %d", amountOfZero);
}