# Class definition :-
class Node :
    # Constructor :-
    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

    # Insertion into the tree :-
    def tinsert(self, x) -> None:
        # If value is smaller then add to the left child
        if x.data < self.data :
            if self.left is None :
                self.left = x
            else :
                self.left.tinsert(x)
        # If value is larger then add to the right child
        elif x.data > self.data :
            if self.right is None :
                self.right = x
            else :
                self.right.tinsert(x)
        # Else update the current value 
        else :
            self.data = x.data
    
    # Printing the tree :-
    def tprint(self) -> None :
        # Inorder traversal
        if self.left is not None :
            self.left.tprint()
        print(self.data)
        if self.right is not None :
            self.right.tprint()

# Initialization of the tree :-
root = Node(12)
e1 = Node(3)
root.tinsert(e1)
e2 = Node(77)
root.tinsert(e2)
e3 = Node(100)
root.tinsert(e3)

# Print the tree :-
root.tprint()





