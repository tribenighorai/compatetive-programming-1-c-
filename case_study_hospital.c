#include <stdio.h>

int main() {
    int n, i;
    int patients[100];
    int max, min;
    int maxHour, minHour, peakHour;
    int sum = 0;
    float average;
    int aboveAverage = 0;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    printf("Enter number of patients for each hour:\n");

    for (i = 0; i < n; i++) {
        printf("Hour %d: ", i + 1);
        scanf("%d", &patients[i]);
        sum += patients[i];
    }

    max = patients[0];
    min = patients[0];
    maxHour = 1;
    minHour = 1;

    for (i = 1; i < n; i++) {
        if (patients[i] > max) {
            max = patients[i];
            maxHour = i + 1;
        }

        if (patients[i] < min) {
            min = patients[i];
            minHour = i + 1;
        }
    }

    average = (float)sum / n;

    peakHour = maxHour;

    for (i = 0; i < n; i++) {
        if (patients[i] > average) {
            aboveAverage++;
        }
    }

    printf("\nMaximum patients: %d\n", max);
    printf("Hour of maximum patients: %d\n", maxHour);

    printf("Minimum patients: %d\n", min);
    printf("Hour of minimum patients: %d\n", minHour);

    printf("Peak hour: %d\n", peakHour);

    printf("Average patients: %.2f\n", average);
    printf("Hours above average: %d\n", aboveAverage);

    return 0;
}
