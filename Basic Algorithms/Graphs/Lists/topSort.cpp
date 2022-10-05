#include "base.h"

void Graph :: topSortUtil(int v, bool visited[], stack<int>& Stack) {
    visited[v] = true;
    list<int>::iterator i;
    for (i = adjLists[v].begin(); i != adjLists[v].end(); i++)
        if(!visited[*i])
            topSortUtil(*i, visited, Stack);
    Stack.push(v);
}

void Graph :: topSort() {
    stack<int> Stack;
    bool *visited = new bool[numVertices];
    for (int i = 0; i < numVertices; i++)
        visited[i] = false;
    for (int i = 0; i < numVertices; i++)
        if(visited[i] == false)
            topSortUtil(i, visited, Stack);

    while(Stack.empty() == false) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

