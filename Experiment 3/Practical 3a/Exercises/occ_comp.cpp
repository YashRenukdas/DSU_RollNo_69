#include <stdio.h>

int main(){
	int i, n, flag = 0, key, count = 0, comparisons = 0;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter elements into array: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter element to search for: ");
	scanf("%d", &key);
	
	for(i = 0; i < n; i++){
		comparisons++;
		if(a[i] == key){
			flag = 1;
			count++;
		}
	}
	
	if(flag == 0){
		printf("Element not found.\n");
	} else {
		printf("Element found %d times.\n", count);
	}
	
	printf("Number of comparisions performed: %d\n", comparisons);
	
	return 0;
}