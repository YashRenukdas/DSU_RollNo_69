#include <stdio.h>
int main(){
	int array[5], i;
	
	printf("Enter 5 elements into array: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Reverse of array: ");
	for(i = 4; i >= 0; i--){
		printf("%d ", array[i]);
	}
	
	return 0;
}