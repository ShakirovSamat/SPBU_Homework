#include <stdio.h>
#include <math.h>

int main() {
	int n;

	printf("THe program finds simple numbers < n\n");
	printf("Enrer n = ");
	scanf_s("%d", &n);

	int simpleNums[100000] = {1,2};
	int curIndex = 1;
	for(int num = 3; num <= n; ++num){
		int isSimple = 1;
		for(int dIndex = 1; dIndex < curIndex; ++dIndex){
			if((int)sqrt(num) < simpleNums[dIndex]){
				break;
			}
			if(num % simpleNums[dIndex] == 0){
				isSimple = 0;
				break;
			}
		}
		if (isSimple){
			curIndex++;
			simpleNums[curIndex] = num;
		}
	}
	if (n < 3){
		for(int i = 0; i < n; ++i){
			printf("%d ", simpleNums[i]);
		}
	}
	else{
		for(int i = 0; i <= curIndex; ++i){
			printf("%d ", simpleNums[i]);
		}
	}
	return 0;
}