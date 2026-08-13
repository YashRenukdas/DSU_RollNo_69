#include <stdio.h>

int main() {
    int num, b_pos;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &b_pos);

    num = num ^ (1 << b_pos);

    printf("Number after toggling bit = %d\n", num);

    return 0;
}