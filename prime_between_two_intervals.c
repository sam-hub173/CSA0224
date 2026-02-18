#include <stdio.h>
int main() {
    int start, end, flag;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++) {
        if(i <= 1) continue;

        flag = 0;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }

    return 0;
}
