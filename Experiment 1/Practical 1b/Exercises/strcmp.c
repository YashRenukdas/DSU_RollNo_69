#include <stdio.h>
int main(){
	char str1[50], str2[50];
	int i = 0;
	
	printf("Enter the first string: ");
	gets(str1);
	
	printf("Enter the second string: ");
	gets(str2);
	
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] != str2[i]){
			printf("Strings are different.");
			return 0;
		}
		i++;
	}
	
	if(str1[i] == str2[i]){
		printf("Strings are equal.");
	} else {
		printf("Strings are different.");
	}
	
	return 0;
}