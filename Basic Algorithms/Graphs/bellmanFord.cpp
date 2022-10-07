#include<bits/stdc++.h>
using namespace std;

void bellmanFord(int graph[][3], int v, int e, int src) {
    int dist[v];
    for (int i = 0; i < v; i++) {
        dist[i] = INT_MAX;
    }
    dist[src] = 0;
    for (int i = 0; i < v - 1; i++) {
        for (int j = 0; j < e; j++) {
            if(graph[j][0] != INT_MAX && 
            dist[graph[j][0] + graph[j][2] <
            dist[graph[j][1]]]) {
                dist[graph[j][1]] = dist[graph[j][0]] + graph[j][2];
            }
        }
    }
    for (int i = 0; i < e; i++) {
        int x = graph[i][0], y = graph[i][1];
        int weight = graph[i][2];
        if(dist[x] != INT_MAX && dist[x]+weight < dist[y]) {
            cout << "Graph has negative weight cycle" << endl;
        }
    }
    cout << "Vertex distance from source " << endl;
    for (int i = 0; i < v; i++) {
        cout << i << "\t\t" << dist[i] << endl;
    }
}