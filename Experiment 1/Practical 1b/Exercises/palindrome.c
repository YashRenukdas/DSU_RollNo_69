#include <stdio.h>
#include <string.h>
int main(){
	char str[50];
	int i, n, flag = 0;
	
	printf("Enter a string: ");
	scanf("%s", str);
	
	n = strlen(str);
	for(i = 0; i < n/2; i++){
		if(str[i] != str[n-1-i]){
			flag = 1;
			break;
		}
	}
	
	if(flag == 0) {
        printf("This is a palindrome");
    } else {
        printf("This is not a palindrome");
    }
    
	return 0;
}