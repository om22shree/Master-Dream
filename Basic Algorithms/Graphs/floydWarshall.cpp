#include<bits/stdc++.h>
using namespace std;

#define v 4
#define INF 999999

void printSolution(int dist[][v]) {
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++) {
            if(dist[i][j] == INF) {
                cout << "INF" << " ";
            } else {
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
}

void floydWarshall(int graph[][v]) {
    int dist[v][v];
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            dist[i][j] = graph[i][j];

    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            for (int k = 0; k < v; k++)
                if(dist[i][j] > (dist[i][k] + dist[k][j]) && 
                    (dist[i][k] != INF && dist[k][j] != INF)) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }

    printSolution(dist);
}
                    