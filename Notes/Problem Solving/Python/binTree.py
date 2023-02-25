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

    def preOrder(self) -> None :
        print(self.data)
        if self.left is not None :
            self.left.preOrder()
        if self.right is not None :
            self.right.preOrder()

    def postOrder(self) -> None :
        if self.left is not None :
            self.left.postOrder()
        if self.right is not None :
            self.right.postOrder()
        print(self.data)

# Initialization of the tree :-
root = Node(12)
e1 = Node(3)
root.tinsert(e1)
e2 = Node(77)
root.tinsert(e2)
e3 = Node(100)
root.tinsert(e3)

# Print the tree :-
# Inorder traversal :-
print("Inorder :-")
root.tprint()
# PreOrder traversal :-
print("Pre order :-")
root.preOrder()
# PostOrder traversal :-
print("Post order :-")
root.postOrder()






