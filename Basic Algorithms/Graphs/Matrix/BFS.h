#include <bits/stdc++.h>
using namespace std;

void printBFS(int **edges, int n, int sv, bool *visited) {
    queue<int> pendingV;
    pendingV.push(sv);
    visited[sv] = true;
    while(!pendingV.empty()) {
        int currV = pendingV.front();
        pendingV.pop();
        cout << currV << endl;
        for (int i = 0; i < n; i++) {
            if(i != currV) {
                if(edges[currV][i] && !visited[i]) {
                    pendingV.push(i);
                    visited[i] = true;
                }
            }
        }
    }
}


void BFS(int **edges, int n) {
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if(!visited[i]) {
            printBFS(edges, n, i, visited);
        }
    }
}