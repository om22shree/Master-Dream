# List representation of a graph using dict
graph = {}
# Total no. of nodes 
n = 6
# Creating a graph with empty lists as values
for i in range(n) :
    graph[i] = []

# Entering vlues in the graph 
ipt = [[0, 1], [0, 2], [0, 3],
       [0, 4], [1, 3], [2, 3],
       [2, 4], [2, 5], [3, 5]]
for (u, v) in ipt :
    graph[u].append(v)
    graph[v].append(u)

'''
# Printing the graph :-
for x in graph.keys() :
    print(x, ":", graph[x])
'''


# DFS traversal :-
def dfs(graph, node, visited=set()) -> None :
    print(node)
    visited.add(node)
    for child in graph[node] :
        if child not in visited :
            dfs(graph, child, visited)

'''
# Call the DFS function :-
dfs(graph, 0)
'''


# Connected components :-

