#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int base, elementSize;
    int offset, effectiveAddress;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter element size: ");
    scanf("%d", &elementSize);

    printf("Enter row index: ");
    scanf("%d", &i);

    printf("Enter column index: ");
    scanf("%d", &j);

    offset = ((i * cols) + j) * elementSize;
    effectiveAddress = base + offset;

    printf("Offset = %d\n", offset);
    printf("Effective Address = %d\n", effectiveAddress);

    return 0;
}
