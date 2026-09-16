#include <stdio.h>

int main() {
    int n, i, threshold;
    float attendance[100];
    int belowCount = 0;
    int lowestPosition = 0;
    float sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance percentage of %d students:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%f", &attendance[i]);
        sum += attendance[i];
    }

    printf("Enter attendance threshold: ");
    scanf("%d", &threshold);

    // Count students below threshold
    for (i = 0; i < n; i++) {
        if (attendance[i] < threshold) {
            belowCount++;
        }
    }

    // Find lowest attendance and position
    for (i = 1; i < n; i++) {
        if (attendance[i] < attendance[lowestPosition]) {
            lowestPosition = i;
        }
    }

    average = sum / n;

    printf("\nStudents below threshold: %d\n", belowCount);
    printf("Lowest attendance: %.2f%%\n", attendance[lowestPosition]);
    printf("Position: %d\n", lowestPosition + 1);
    printf("Average attendance: %.2f%%\n", average);

    return 0;
}
