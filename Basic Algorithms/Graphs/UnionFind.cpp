#include<bits/stdc++.h>
using namespace std;

class Edge {
public:
    int src, dest;
};

class Graph {
public:
    int v, e;
    Edge* edge;
};

Graph* createGraph(int v, int e) {
    Graph *graph = new Graph;
    graph->v = v;
    graph->e = e;
    graph->edge = new Edge[graph->e * sizeof(Edge)];
    return graph;
}

int find(int parent[], int i) {
    if(parent[i] == i)
        return i;
    return find(parent, parent[i]);
}

void Union(int parent[], int x, int y) {
    parent[x] = y;
}

int isCycle(Graph* graph) {
    int *parent = new int[graph->v * sizeof(int)];
    memset(parent, 0, sizeof(int) * graph->v);
    for (int i = 0; i < graph->e; i++) {
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);
        if(x == y)
            return 1;
        Union(parent, x, y);
    }
    return 0;
}