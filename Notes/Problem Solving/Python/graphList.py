class Graph :
    # Constructor :-
    def __init__(self, gdict = None) -> None:
        if gdict is None :
            gdict = {}
        self.gdict = gdict
    
    # Edges of the graph :-
    def vrtxList(self) -> None :
        print(list(self.gdict.keys()))

    # Adding a vertex to the graph :-
    def addVrtx(self, x) -> None :
        if x not in self.gdict :
            self.gdict[x] = []

    # Adding an edge to the graph :-
    def addEdge(self, u, v) -> None :
        if u not in self.gdict :
            self.addVrtx(u)
        else :
            if v not in self.gdict[u] :
                self.gdict[u].append(v)
    
    # Printing the edge_list representation of the graph :-
    def Gprint(self) -> None :
        print(self.gdict)


# Initializing the graph dictionary :-
gdict = {
    77 : ['Om'],
    70 : ['Anand'],
    525 : ['Rohit'],
    86 : ['Sinha']
}

# Creating the graph :-
root = Graph(gdict)

# Printing the list of vertices :-
root.vrtxList()

# Adding a vertex :-
root.addVrtx(90)
root.vrtxList()

# Prinitng the graph :-
root.Gprint()

# Adding edges to the graph :-
root.addEdge(90, 'Sourav')
root.addEdge(420, 'Abhiraj')
root.addEdge(77, 'Shree')
root.Gprint()

            