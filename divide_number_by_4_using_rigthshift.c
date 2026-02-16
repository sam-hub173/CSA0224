#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num >> 2;   // Right shift by 2 (divide by 4)

    printf("Result after dividing by 4: %d\n", result);

    return 0;
}
