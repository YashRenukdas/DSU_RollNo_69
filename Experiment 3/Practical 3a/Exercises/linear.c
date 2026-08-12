#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, flag = 0, key;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int *a = (int *)malloc(n * sizeof(int));
	
	if(a == NULL){
		printf("Memory allocation failed.");
		return 0;
	}
	
	printf("Enter elements into array: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter element to search for: ");
	scanf("%d", &key);
	
	for(i = 0; i < n; i++){
		if(a[i] == key){
			printf("Element found at position %d", i);
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		printf("Element not found.");
	}
	
	return 0;
}