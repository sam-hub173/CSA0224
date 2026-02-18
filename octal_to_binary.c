#include <stdio.h>

int main() {
    int octal, decimal = 0, i = 1, rem;
    int binary[32], j = 0;

    printf("Enter octal number: ");
    scanf("%d", &octal);

    while(octal != 0) {
        rem = octal % 10;
        decimal += rem * i;
        i *= 8;
        octal /= 10;
    }

    while(decimal != 0) {
        binary[j++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary = ");
    for(int k = j - 1; k >= 0; k--) {
        printf("%d", binary[k]);
    }

    return 0;
}
