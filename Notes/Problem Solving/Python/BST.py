class Node :
    # Constructor function :-
    def __init__(self, data) -> None:
        self.data = data
        self.right = None
        self.left = None

    # BSTree insertion function : left <= x <= right :-
    def tinsert(self, x) -> None :
        if self.data is not None:
            if x.data < self.data :
                if self.left is None :
                    self.left = x
                else :
                    self.left.tinsert(x)
            elif x.data > self.data :
                if self.right is None :
                    self.right = x
                else :
                    self.right.tinsert(x)
            else :
                self.data = x.data
        else :
            self.data = x.data

    # Prints the BST inorder :-
    def tprint(self) -> None :
        if self.left is not None:
            self.left.tprint()
        print(self.data)
        if self.right is not None :
            self.right.tprint()

    # Checks whether the value exists in the tree :-
    def findVal(self, x) -> bool :
        if self is not None :
            if self.data == x :
                return True
            elif x > self.data :
                if self.right is not None :
                    return self.right.findVal(x)
                else :
                    return False
            else :
                if self.left is not None :
                    return self.left.findVal(x)
                else :
                    return False
        else :
            return False

# Initialization of the tree :-
root = Node(77)

# Insertion into the tree :- 
root.tinsert(Node(100))
root.tinsert(Node(122))
root.tinsert(Node(56))
root.tinsert(Node(24))
root.tinsert(Node(345))
root.tinsert(Node(96))

# Printing the tree :-
root.tprint()

# Check for values in the tree :-
print(root.findVal(345))
print(root.findVal(24))
print(root.findVal(77))
print(root.findVal(672))
            

    