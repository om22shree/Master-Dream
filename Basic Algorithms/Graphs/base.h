#include<bits/stdc++.h>
using namespace std;
// Lists representation
class Graph {
public:
    int numVertices;
    list<int> *adjLists;
    bool *visited;

    Graph(int v);
    void addEdge(int src, int dest);
    void DFS(int vertex);
    void BFS(int startVertex);
};

Graph :: Graph(int vertices) {
    numVertices = vertices;
    adjLists = new list<int>[vertices];
    visited = new bool[vertices];
}

void Graph :: addEdge(int src, int dest) {
    adjLists[src].push_front(dest);
}