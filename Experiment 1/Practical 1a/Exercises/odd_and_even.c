#include <stdio.h>
int main(){
	int array[5], i;
	
	printf("Enter 5 elements into array: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Even elements: ");
	for(i = 0; i < 5; i++){
		if(array[i] % 2 == 0){
			printf("%d ", array[i]);
		}
	}
	
	printf("\nOdd elements: ");
	for(i = 0; i < 5; i++){
		if(array[i] % 2 != 0){
			printf("%d ", array[i]);
		}
	}
	
	return 0;
}