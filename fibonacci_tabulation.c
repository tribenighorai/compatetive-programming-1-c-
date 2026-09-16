#include <stdio.h>

int main() {
    int n, i;
    int dp[100];

    printf("Enter n: ");
    scanf("%d", &n);

    dp[0] = 0;
    dp[1] = 1;

    printf("Fibonacci Series: ");

    for (i = 0; i <= n; i++) {
        if (i >= 2)
            dp[i] = dp[i - 1] + dp[i - 2];

        printf("%d ", dp[i]);
    }

    return 0;
}
