#include <stdio.h>
#include <string.h>

int main(){
	char array1[100], array2[100];
	char *p1 = array1;
	char *p2 = array2;
	char ch;
	int choice, length, result;
	char *ch_search;

	printf("Enter 1st string: ");
	gets(p1);
	
	printf("Enter 2nd string: ");
	gets(p2);
	
	printf("Select string function:\n1.String Length\n2.String Compare\n3.String Copy\n4.String Concatenate\n5.String Reverse\n6.String Uppercase\n7.String Lowercase\n8.String Character\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			length = strlen(p1);
			printf("Length of string = %d", length);
			
			break;
		
		case 2:
			result = strcmp(p1, p2);
			printf("After Comparing: %d", result);
			
			break;
		
		case 3:
			strcpy(p2, p1);
			printf("Copied elements of String 1 to String 2.\nString 1:%s\nString 2:%s", p1, p2);
			
			break;
			
		case 4:
			strcat(p1, p2);
			printf("Concatenated String 2 to String 1: %s", p1);
			
			break;
			
		case 5:
			strrev(p1);
			printf("Reversed String: %s", p1);
			
			break;
			
		case 6:
			strupr(p1);
			printf("String in Uppercase: %s", p1);
			
			break;
			
		case 7:
			strlwr(p1);
			printf("String in Lowercase: %s", p1);
			
			break;
			
		case 8:
			printf("Enter character to search for: ");
			scanf("%s", &ch);
			ch_search = strchr(p1, ch);
			if(ch_search != NULL){
				printf("Character found.");
			}
			else {
				printf("Character not found.");
			}
			
			break;
			
		default:
			printf("Invalid Choice!");
			break;
	}
	
	return 0;
}
