#include <stdio.h>

int main() {
    int n, i, j;
    float prices[100];
    float temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &prices[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (prices[j] > prices[j + 1]) {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }

    printf("\nPrices in ascending order:\n");

    for (i = 0; i < n; i++) {
        printf("%.2f ", prices[i]);
    }

    return 0;
}
