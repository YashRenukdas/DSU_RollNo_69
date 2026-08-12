#include <stdio.h>
int main(){
	int i;
	int vowels = 0, consonants = 0;
	char array[100];
	
	printf("Enter string: ");
	gets(array);
	
	for(i = 0; array[i] != '\0'; i++){
		if(array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' ||
		   array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U'){
		   	vowels++;
		   } else {
		   	consonants++;
		   }
	}
	
	printf("Number of vowels: %d\n", vowels);
	printf("Number of consonants: %d", consonants);
	return 0;
}