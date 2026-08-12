#include <stdio.h>
#include <string.h>
int main(){
	int i, n, flag = 0, occurrences = 0;
	char key[50], str[50][50];
	
	printf("Enter number of strings: ");
	scanf("%d", &n);
	
	printf("Enter %d strings: ", n);
	for(i = 0; i < n; i++){
		scanf("%s", str[i]);
	}
	
	printf("Enter string to search for: ");
	scanf("%s", key);
	
	for(i = 0; i < n; i++){
		if(strcmp(str[i], key) == 0){
			occurrences++;
			flag = 1;
		}
	}
	
	if(flag == 0){
		printf("String not found.");
	} else {
		printf("String found. Number of occurrences: %d", occurrences);
	}
	
	return 0;
}