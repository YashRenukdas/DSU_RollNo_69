#include <stdio.h>
int main(){
	int a[50], i, n, ch, p, e;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	printf("Enter array elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Choose an operation:\n1.Insert\n2.Delete\n3.Display\n");
	scanf("%d", &ch);
	
	switch(ch){
		case 1:
			printf("Enter at which position to insert element in array: ");
			scanf("%d", &p);
			
			printf("Enter element to insert: ");
			scanf("%d", &e);
			
			for(i = n; i >= p; i--){
				a[i] = a[i-1];
			}
			
			a[p-1] = e;
			n++;
			printf("Array after insertion:\n");
			
			for(i = 0; i < n; i++){
				printf("%d", a[i]);
			}
			
			break;
		
		case 2:
			printf("Enter position of element to delete: ");
			scanf("%d", &p);
			
			for(i = p-1; i < n-1; i++){
				a[i] = a[i+1];
			}
			n--;
			
			printf("Array after deletion:\n");
			for(i = 0; i < n; i++){
				printf("%d", a[i]);
			}
			break;
			
		case 3:
			printf("Array elements are: ");
			for(i = 0; i < n; i++){
				printf("%d", a[i]);
			}
			break;
			
		default:
			printf("Invalid Choice!");
	}
	return 0;
}
