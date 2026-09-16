#include <stdio.h>

int main() {
    int arr[100], n, element, i, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("Index of the element = %d", index);
    else
        printf("Element not found");

    return 0;
}
