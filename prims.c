#include <stdio.h>

#define INF 99999

int main() {
    int graph[20][20], selected[20] = {0};
    int n, i, j, edges = 0;
    int min, x, y, cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter weighted adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    selected[0] = 1;

    printf("Edges in MST:\n");

    while (edges < n - 1) {
        min = INF;
        x = y = -1;

        for (i = 0; i < n; i++) {
            if (selected[i]) {
                for (j = 0; j < n; j++) {
                    if (!selected[j] && graph[i][j] && graph[i][j] < min) {
                        min = graph[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        if (x == -1)
            break;

        printf("%d - %d = %d\n", x, y, min);
        cost += min;
        selected[y] = 1;
        edges++;
    }

    printf("Minimum Cost = %d", cost);

    return 0;
}
