#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Number of desired sequences: 2\n");
        return 0;
    }

    long long dp0[10001] = {0};
    long long dp1[10001] = {0};
    long long dp11[10001] = {0};
    long long dp[10001] = {0};

    dp0[1] = 1;
    dp1[1] = 1;
    dp11[1] = 0;
    dp[1] = dp0[1] + dp1[1] + dp11[1];

    dp0[2] = 2;
    dp1[2] = 1;
    dp11[2] = 1;
    dp[2] = dp0[2] + dp1[2] + dp11[2];

    for (int i = 3; i <= n; i++) {
        dp0[i] = dp[i-1] % MOD;
        dp1[i] = dp0[i-1] % MOD;
        dp11[i] = dp1[i-1] % MOD;
        dp[i] = (dp0[i] + dp1[i] + dp11[i]) % MOD;
    }

    printf("Number of desired sequences: %lld\n", dp[n]);

    return 0;
}
