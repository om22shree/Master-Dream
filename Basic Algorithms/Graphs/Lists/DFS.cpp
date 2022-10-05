#include "base.h"

void Graph :: DFS(int vertex) {
    visited[vertex] = true;
    list<int> adjList = adjLists[vertex];
    cout << vertex << " ";
    list<int>::iterator i;
    for (i = adjList.begin(); i != adjList.end(); i++) {
        if(!visited[*i]) {
            DFS(*i);
        }
    }
}