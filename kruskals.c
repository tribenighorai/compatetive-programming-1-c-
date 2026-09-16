#include <stdio.h>

struct Edge {
    int u, v, w;
};

int parent[20];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void unionSet(int u, int v) {
    int a = find(u);
    int b = find(v);
    parent[a] = b;
}

int main() {
    struct Edge edge[100], temp;
    int n, e, i, j, count = 0, cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (source destination weight):\n");
    for (i = 0; i < e; i++)
        scanf("%d %d %d", &edge[i].u, &edge[i].v, &edge[i].w);

    for (i = 0; i < n; i++)
        parent[i] = i;

    for (i = 0; i < e - 1; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (edge[j].w > edge[j + 1].w) {
                temp = edge[j];
                edge[j] = edge[j + 1];
                edge[j + 1] = temp;
            }
        }
    }

    printf("Edges in MST:\n");

    for (i = 0; i < e && count < n - 1; i++) {
        if (find(edge[i].u) != find(edge[i].v)) {
            printf("%d - %d = %d\n", edge[i].u, edge[i].v, edge[i].w);
            cost += edge[i].w;
            unionSet(edge[i].u, edge[i].v);
            count++;
        }
    }

    printf("Minimum Cost = %d", cost);

    return 0;
}
