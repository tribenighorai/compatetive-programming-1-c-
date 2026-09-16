#include <stdio.h>

#define INF 99999

int main() {
    int graph[20][20], dist[20], visited[20] = {0};
    int n, source, i, j, count, u, min;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter weighted adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &source);

    for (i = 0; i < n; i++)
        dist[i] = INF;

    dist[source] = 0;

    for (count = 0; count < n - 1; count++) {
        min = INF;
        u = -1;

        for (i = 0; i < n; i++) {
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        if (u == -1)
            break;

        visited[u] = 1;

        for (j = 0; j < n; j++) {
            if (!visited[j] && graph[u][j] && dist[u] + graph[u][j] < dist[j])
                dist[j] = dist[u] + graph[u][j];
        }
    }

    printf("Shortest distances from %d:\n", source);

    for (i = 0; i < n; i++)
        printf("%d -> %d = %d\n", source, i, dist[i]);

    return 0;
}
