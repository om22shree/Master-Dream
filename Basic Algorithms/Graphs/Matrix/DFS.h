#include<bits/stdc++.h>
using namespace std;

void printDFS(int **edges, int n, int sv, bool *visited) {
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++) {
        if(i == sv)
            continue;
        if(edges[sv][i])
            if(!visited[i])
                printDFS(edges, n, i, visited);
    }
}


void DFS(int **edges, int n) {
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if(!visited[i]) {
            printDFS(edges, n, i, visited);
        }
    }
}