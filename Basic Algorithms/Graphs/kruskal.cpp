#include<bits/stdc++.h>
#define v 5
using namespace std;

int parent[v];

int find(int i) {
    while(parent[i] != i) {
        i = parent[i];
    }
    return i;
}

void union1(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void kruskalMST(int cost[][v]) {
    int minCost = 0;
    for (int i = 0; i < v; i++) {
        parent[i] = i;
    }
    int edge_count = 0;

    while(edge_count < v-1) {
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if(find(i) != find(j) && cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        union1(a, b);
        printf("Edge %d: (%d, %d)\tCost: %d\n", edge_count++, a, b, min);
        minCost += min;
    }
    printf("MinCost = %d\n", minCost);
}