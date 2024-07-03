#include <stdio.h>

int minSteps(int x, int y, int* twoStepCount) {
    if (x == y) return 0;

    int current = x;
    int steps = 0;
    int k = 1;
    int lastStep = 0;
    *twoStepCount = 0;

    printf("Path: %d", x);

    while (current < y) {
        current += k;
        steps++;

        printf(" -> %d", current);

        if (k == 2) (*twoStepCount)++;

        if (current < y) {
            if (lastStep == k) {
                k = k - 1 > 0 ? k - 1 : 1;
            } else {
                k++;
            }
        }

        lastStep = k;
    }

    if (current != y) {
        steps++;
        printf(" -> %d", y);
    }

    printf("\n");

    return steps;
}

int main() {
    int x, y;
    int twoStepCount;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    int result = minSteps(x, y, &twoStepCount);
    printf("The minimum number of steps from %d to %d is: %d\n", x, y, result);
    printf("Number of 2-step moves: %d\n", twoStepCount);

    return 0;
}
