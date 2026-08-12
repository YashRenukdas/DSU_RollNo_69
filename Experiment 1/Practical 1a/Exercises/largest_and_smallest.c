#include <stdio.h>
int main(){
	int array[5];
	int i, smallest, largest;
	
	printf("Enter 5 numbers into array: ");
	
	for(i = 0; i < 5; i++){
		scanf("%d", &array[i]);
	}
	
	largest = smallest = array[0];
	
	for(i = 0; i < 5; i++){
		if(array[i] > largest){
			largest = array[i];
		}
		
		if(array[i] < smallest){
			smallest = array[i];
		}
	}
	
	printf("The largest element is %d.\nThe smallest element is %d.", largest, smallest);
	return 0;
}