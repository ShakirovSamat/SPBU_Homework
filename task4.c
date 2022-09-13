#include <stdio.h>

int main(){
	int amountOfLuckyTickets = 0;
	int amountOfWays[28] = {0};
	int targetSum = 0;


	printf("The program counts amount of lucky tickets with particular sum\n");
	// Получаем искомую сумму
	do{
		if (targetSum < 27){
			printf("Enter target sum = ");
		}
		else{
			printf("Target sum have to be less than 28. Enter target sum again = ");
		}
		scanf_s("%d",&targetSum);
	}while(targetSum > 27);


	// Подсчитываем кол-во спсобов получить суммы от 0 до 27
	for(int i = 0; i < 10;++i){
		for(int j = 0; j < 10;++j){
			for(int k = 0; k < 10;++k){
				amountOfWays[i + j + k]++;
			}
		}
	}
	// Считаем количество счастливых билетов и выводим в консоль
	amountOfLuckyTickets = amountOfWays[targetSum] * amountOfWays[targetSum];
	printf("Amount of lucky tickets = %d",amountOfLuckyTickets);
}