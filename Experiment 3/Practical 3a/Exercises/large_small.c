#include <stdio.h>

int main(){
	int i, n;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter elements into array: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int largest = a[0];
	int smallest = a[0];
	
	for(i = 0; i < n; i++){
		if(a[i] > largest){
			largest = a[i];
		}
		
		if(a[i] < smallest){
			smallest = a[i];
		}
	}
	
	printf("Largest element: %d\n", largest);
	printf("Smallest element: %d\n", smallest);
	
	return 0;
}
