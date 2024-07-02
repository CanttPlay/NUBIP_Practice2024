#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    int count = 0;

    for (int m = 1; m < n; m++) {
        if (n % (m + 1) == 0) {
            count++;
        }
    }

    printf("Number of equal divisors of %d: %d\n", n, count);

    return 0;
}
