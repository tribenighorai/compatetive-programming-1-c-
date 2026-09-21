#include <stdio.h>

int main() {
    int a[100], n, key;
    int low, high, mid1, mid2, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid1 = low + (high - low) / 3;
        mid2 = high - (high - low) / 3;

        if (a[mid1] == key) {
            printf("Element found at index %d", mid1);
            return 0;
        }

        if (a[mid2] == key) {
            printf("Element found at index %d", mid2);
            return 0;
        }

        if (key < a[mid1])
            high = mid1 - 1;
        else if (key > a[mid2])
            low = mid2 + 1;
        else {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }

    printf("Element not found");

    return 0;
}
