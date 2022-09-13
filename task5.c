#include <stdio.h>
#include <string.h>

int main(){
	char str[1000] = "";

	printf("Enter string = ");
	scanf_s("%s",&str);

 	char stuck[100] = {str[0]};
	int len = strlen(str);
	int curPosition = 1;
	int isCorrectStr = 1;

	for(int i = 0; i < len;++i){
		switch(str[i]){
			case '(':
				stuck[curPosition] = '(';
				curPosition++;
				break;
			case '[':
				stuck[curPosition] = '[';
				curPosition++;
				break;
			case '{':
				stuck[curPosition] = '{';
				curPosition++;
				break;
			case ')':
				if (stuck[curPosition - 1] == '('){
					curPosition -= 2;
				}
				else{
					isCorrectStr = 0;
				}
				break;
			case ']':
				if (stuck[curPosition - 1] == '['){
					curPosition -= 2;
				}
				else{
					isCorrectStr = 0;
				}
				break;
			case '}':
				if (stuck[curPosition - 1] == '{'){
					curPosition -= 2;
				}
				else{
					isCorrectStr = 0;
				}
				break;
			default:
				isCorrectStr = 0;
									
		}
	}
	if (isCorrectStr){
		printf("The string is correct");
	}
	else{
		printf("The string is wrong");
	}

}