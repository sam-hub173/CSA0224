#include <stdio.h>

int main() {
    int a = 2;
    int result = a++ * ++a;

    printf("Result = %d\n", result);

    return 0;
}
