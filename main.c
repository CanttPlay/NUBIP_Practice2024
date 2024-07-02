#include <stdio.h>

int main() {
    int p;
    printf("Enter the number of digits p: ");
    scanf("%d", &p);

    if (p == 1) {
        printf("Number of numbers: 2\n");
        return 0;
    }

    if (p == 2) {
        printf("Number of numbers: 4\n");
        return 0;
    }

    long long dp5[31] = {0};
    long long dp9[31] = {0};
    long long dp[31] = {0};

    dp5[1] = 1;
    dp9[1] = 1;
    dp5[2] = 1 + 1;
    dp9[2] = 1 + 1;

    for (int i = 3; i <= p; i++) {
        dp5[i] = dp9[i-1] + dp9[i-2];
        dp9[i] = dp5[i-1] + dp5[i-2];
    }

    dp[p] = dp5[p] + dp9[p];

    printf("Number of numbers: %lld\n", dp[p]);

    return 0;
}
