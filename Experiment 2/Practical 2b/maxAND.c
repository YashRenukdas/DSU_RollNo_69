
#include <stdio.h>

int maxAND(int a[], int n){
    int i, j, max = 0;

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if((a[i] & a[j]) > max){
                max = a[i] & a[j];
        	}
        }
    }

    return max;
}

int main(){
    int a[50], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
	}

    printf("Maximum AND value = %d", maxAND(a, n));

    return 0;
}
