#include <stdio.h>

int main() {
    int score, extra;

    printf("Enter the student's score (out of 100): ");
    scanf("%d", &score);

    printf("Did the student complete extra credit? (1 for Yes, 0 for No): ");
    scanf("%d", &extra);

    if (extra == 1) {
        score = score + 5;

        if (score > 100) {
            score = 100;
        }
    }

    printf("Final Score: %d\n", score);

    if (score > 90) {
        printf("Grade: A\n");
    } 
    else {
        if (score >= 80) {
            printf("Grade: B\n");
        } 
        else {
            if (score >= 70) {
                printf("Grade: C\n");
            } 
            else {
                printf("Grade: D\n");
            }
        }
    }

    return 0;
}
