# Node class :-
class Node :
    def __init__(self, val) -> None :
        self.val = val
        self.next = None
    
# Linked-list class :-
class LL :
    def __init__(self) -> None:
        self.head = None
        self.length = 1
        return

    # Printing the linked-list :-
    def lprint(self) -> None:
        cur = self.head
        while cur is not None :
            print(cur.val, "->", end=" ")
            cur = cur.next
        print("None")
        return

    # Append to the linked-list :-
    def lappend(self, x) -> None :
        # Increase the length whenever you append
        self.length += 1
        # If null linked-list : append acts as initialization
        if self.head is None :
            self.head = x
            return
        # If linked-list has elements, then traverse to the end and append
        cur = self.head
        while cur.next is not None :
            cur = cur.next
        cur.next = x
        return 

    # Prepend : adds elements to the beginning of the linked-list :-
    def lprepend(self, x) -> None :
        # Increase the length whenever you prepepnd
        self.length += 1
        x.next = self.head
        self.head = x
        return 

    # linsert : Insert element at the given index :-
    def linsert(self, x, n) -> None :
        # If n <= 1 : prepend x
        if n <= 1 :
            self.lprepend(x)
            return
        # If n > previous length : append x
        if n > self.length :
            self.lappend(x) 

        cur = self.head
        for i in range(1, n-1) :
            cur = cur.next
        x.next = cur.next
        cur.next = x
        # Increase the size when inseting new element.
        self.length += 1
        return


# Linked-list creation :-
l1 = LL()

# Linked-list initialization :-
l1.head = Node(1)
e2 = Node(2)
e3 = Node(3)
e4 = Node(4)
e5 = Node(5)
e6 = Node(6)
e1 = Node(77)

# Append function call :-
l1.lappend(e2)
l1.lappend(e3)
l1.lappend(e4)
l1.lappend(e5)
l1.lappend(e6)

# Prepend function call :-
l1.lprepend(e1)

# Insert function call :-
x = Node(100)
l1.linsert(x, 4)

# Print function call
l1.lprint()

# Size of the linked-list :-
print(l1.length)

