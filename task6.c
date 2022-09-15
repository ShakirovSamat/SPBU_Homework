#include <stdio.h>
#include <string.h>

int main(){
	char string[1000];
	char substring[1000];
	int count = 0;

	printf("The program counts the number of subtrings in a string. Max length of a string ans a substring is 1000 chars\n");

	printf("Enter the string = ");
	scanf_s("%s", &string);

	printf("Enter the substring = ");
	scanf_s("%s", &substring);

	int stringLen = strlen(string);
	int substringLen = strlen(substring);
	for(int i = 0; i < stringLen - substringLen + 1; ++i){
		int isSubstring = 1;
		for(int b = i; b < i + substringLen; ++b){
			if (string[b] != substring[b - i]){
				isSubstring = 0;
				break;
			}
		}
		if (isSubstring) ++count; 
	}
	
	printf("Number of subsstring in string is %d", count);
	return 0;
}