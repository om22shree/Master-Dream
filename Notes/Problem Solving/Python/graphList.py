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



# Connected components : return the number of connected components:-
visited = set()
# The list to store the connected components
ans = []

# DFS utility fubnction for connected components :-
def dfsUtilNum(graph, node, visited) :
    sm = 0
    visited.add(node)
    for child in graph[node] :
        if child not in visited :
            sm += dfsUtilNum(graph, child, visited)
    return sm+1

# List to store the connected componenets :-
ans = []
# Connected components function :-
def ccNum(graph) :
    for node in graph.keys() :
        if node not in visited :
            temp = dfsUtilNum(graph, node, visited)
            ans.append(temp)
''''
ccNum(graph)
print(ans)       
'''


# Connected components : return the list of connected components :-
ans = {}
visited = set()

# Initialising a new graph for this function
g = {}
for i in range(0, 5) :
    g[i] = []
ipt = [[1, 0], [2, 1], [3, 4]]
for (u, v) in ipt :
    g[u].append(v)
    g[v].append(u)

# DFS Utility for connected components by list
temp = []
def dfsUtilList(g, node, visited, temp) :
    temp.append(node)
    visited.add(node)
    for child in g[node] :
        if child not in visited :
            temp = dfsUtilList(g, child, visited, temp)
    return temp

# Connected components using list function :-
ans = {}
def ccList(graph) :
    visited = set()
    ans = []
    for node in g.keys() :
        if node not in visited :
            temp = []
            ans.append(dfsUtilList(g, node, visited, temp))
    return ans

print(ccList(g))