#include <stdio.h>
int main(){
	int i, words = 1;
	char str[50];
	
	printf("Enter a sentence: ");
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			words++;
		}
	}
	
	printf("Number of words: %d", words);
	return 0;
}