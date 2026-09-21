#include <stdio.h>

int main() {
    int n, i, j, temp;
    int start[100], finish[100];

    printf("Enter number of activities: ");
    scanf("%d", &n);

    printf("Enter start times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &start[i]);

    printf("Enter finish times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &finish[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (finish[i] > finish[j]) {
                temp = finish[i];
                finish[i] = finish[j];
                finish[j] = temp;

                temp = start[i];
                start[i] = start[j];
                start[j] = temp;
            }
        }
    }

    printf("Selected activities:\n");

    printf("Activity 1: %d - %d\n", start[0], finish[0]);

    j = 0;

    for (i = 1; i < n; i++) {
        if (start[i] >= finish[j]) {
            printf("Activity %d: %d - %d\n", i + 1, start[i], finish[i]);
            j = i;
        }
    }

    return 0;
}
