#include <stdio.h>

int search(int arr[], int key, int n, int flag);
int main(){
	int n, key, result;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter elements into array: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter element to search for: ");
	scanf("%d", &key);
	
	int flag = 0;
	result = search(arr, key, n, flag);
	if(result > -1){
		flag = 1;
	}
	
	
	if(flag == 0){
		printf("Element not found.");
	} else {
		printf("Element found at index position: %d", result);
	}
	
	return 0;
}

int search(int arr[], int key, int n, int flag){
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			return i;
		}
	}
	
	return 0;
}