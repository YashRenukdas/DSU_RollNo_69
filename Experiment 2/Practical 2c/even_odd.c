
#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num & 1;

    if(result == 0){
        printf("Number is even.");
    } else {
        printf("Number is odd.");
	}
	
    return 0;
}
