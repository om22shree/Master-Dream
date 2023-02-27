# 2D list to store the graph
graph = []

# Total number of verices in the graph
n = 6

# Creation of the 2D matrix(0, 0)
for i in range(n) :
    temp = []
    for j in range(n) :
        temp.append(0)
    graph.append(temp)

# Entering elements into the matrix 
ipt = [[0, 1], [0, 2], [0, 3],
       [0, 4], [1, 3], [2, 3],
       [2, 4], [2, 5], [3, 5]]

for (u, v) in ipt :
    graph[u][v] = graph[v][u] = 1

for x in graph :
    print(x)
