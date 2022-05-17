#include <stdio.h>

/*
0-49 -> F
50-59 -> D
60-69 -> C
70-79 -> B
80-100 -> A
*/

int main() {
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    // &&
    // ||
    // score = 110  T หรือ F => T 
    if (score >= 0 && score <= 100) {
        //100 >= score >= 0 -> 0-100
        if (score <= 49) {
            printf("F");
        } else if (score <= 59) {
            printf("D");
        } else if (score <= 69) {
            printf("C");
        } else if (score <= 79) {
            printf("B");
        } else {
            printf("A");
        }
    } else {
        printf("Invalid input.\n");
    }
}