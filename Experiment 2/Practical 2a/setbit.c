#include <stdio.h>
int main(){
	int num, b_pos, result;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Enter bit position: ");
	scanf("%d", &b_pos);
	
	result = num & (1 << b_pos);
	if(result != 0){
		printf("Bit is set.");
	} else {
		printf("Bit is clear.");
	}
	
	return 0;
}