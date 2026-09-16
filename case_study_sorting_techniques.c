#include <stdio.h>

void printArray(float arr[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    printf("\n");
}

// Bubble Sort
void bubbleSort(float arr[], int n) {
    int i, j;
    float temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(float arr[], int n) {
    int i, j, minIndex;
    float temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Insertion Sort
void insertionSort(float arr[], int n) {
    int i, j;
    float key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n, i;
    float original[100];
    float bubble[100];
    float selection[100];
    float insertion[100];

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &original[i]);

        bubble[i] = original[i];
        selection[i] = original[i];
        insertion[i] = original[i];
    }

    bubbleSort(bubble, n);
    selectionSort(selection, n);
    insertionSort(insertion, n);

    printf("\nBubble Sort:\n");
    printArray(bubble, n);

    printf("\nSelection Sort:\n");
    printArray(selection, n);

    printf("\nInsertion Sort:\n");
    printArray(insertion, n);

    return 0;
}
