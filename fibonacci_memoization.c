#include <stdio.h>

int dp[100];

int fibonacci(int n) {
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return dp[n];
}

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        dp[i] = -1;

    printf("Fibonacci Series: ");

    for (i = 0; i <= n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}
