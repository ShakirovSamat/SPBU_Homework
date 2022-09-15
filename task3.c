#include <stdio.h>

int main(){

	int m;
	int len = 0;
	int curPosition = 0;

	printf("The program swaps parts of array length = n. Exemple a = ar[1]..ar[m] and b = ar[m + 1]..ar[n]. Before program it looks like a,b, after it looks like b,a\n");

	//Получаем длину массива от пользователя
	printf("Enter length of the array = ");
	scanf_s("%d", &len);	

	int ar[len]; 

	//Заполняем массив
	while (curPosition < len){
		printf("number %d = ",curPosition + 1);
		scanf_s("%d", &ar[curPosition]);
		++curPosition;
	}
	
	// Получаем индекс, разделяющий массив
	printf("Enter m = ");
	scanf_s("%d", &m);


	//Переворачиваем массив целиком
	for(int i = 0; i < len / 2; ++i){
		int temp = ar[i];
		ar[i] = ar[len - 1 - i];
		ar[len - 1 - i] = temp;
	}
	
	//Перевараиваем часть массива от m + 1 до n
	for(int i = 0; i < (len - m) / 2; ++i){
		int temp = ar[i];
		ar[i] = ar[(len - m) - 1 - i];
		ar[(len - m) - 1 - i] = temp;	
	}
	
	//Переварачиваем часть массива от 0 до m
	int st = len - m;
	for(int i = 0; i < m / 2; ++i){
		int temp = ar[st + i];
		ar[st + i] = ar[len - 1 - i];
		ar[len - 1 - i] = temp;	
	}

	//Вывод результата
	printf("Answer = {");
	for(int i = 0; i < len - 1; ++i){
		printf("%d, ",ar[i]);
	}
	printf("%d}",ar[len-1]);
	return 0;
	
}