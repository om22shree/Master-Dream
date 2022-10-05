#include<bits/stdc++.h>
#include "DFS.h"
#include "BFS.h"
using namespace std;

int main() {
    int n, e;
    cout << "Enter the no. of vertices & edges: ";
    cin >> n >> e;
    int **edges = new int*[n];
    for (int i = 0; i < n; i++) {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++) {
            edges[i][j] = 0;
        }
    }

    cout << "Enter the edges: " << endl;
    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        edges[x][y] = 1;
        edges[y][x] = 1;
    }

    cout << "DFS :-" << endl;
    DFS(edges, n);
    cout << "BFS :-" << endl;
    BFS(edges, n);
    return 0;
}