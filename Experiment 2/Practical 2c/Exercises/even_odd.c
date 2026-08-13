
#include <stdio.h>
int countOdd(int a[], int n){
    int i, count = 0;

    for(i = 0; i < n; i++){
        if((a[i] & 1) != 0)
            count++;
    }

    return count;
}

int countEven(int a[], int n){
    int i, count = 0;

    for(i = 0; i < n; i++){
        if((a[i] & 1) == 0)
            count++;
    }

    return count;
}

int main()
{
    int a[50], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
	}

    printf("Number of odd elements = %d\n", countOdd(a, n));
    printf("Number of even elements = %d", countEven(a, n));

    return 0;
}