#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (temperature < 20) {
        printf("It is too cold.\n");
    } 
    else if (temperature > 35) {
        printf("It is too hot.\n");
    } 
    else {
        printf("Temperature is normal.\n");
    }

    return 0;
}
