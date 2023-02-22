import collections
import math

# Everything to do with hash-sets :-

# implemented as set
s = set()

# Adding elements :-
for i in range(5) :
    s.add(i)
print(s)

# Conversion from list :-
print(set([1, 2, 3, 4, 5, 6]))

# Check if element in set :-
print(1 in s)
print(5 in s)




# Everything to do with hash-maps :-

# Implemented as dictionaries :-
m = {}
m[1] = "Om"
m[2] = "Anand"
m[3] = "Rohit"
m[4] = "Sinha"
print(m)

# Size of map :-
print(len(m))

# Contains in dict :-
print("Rohit" in m.values())
print("Mani" in m.values())

# Iteration over the map :-
for key, val in m.items() :
    print(key, val)

# Dict comprehension :-
m.clear()
m = {i : 2*i for i in range(5)}
print(m)

t = tuple([1, 2, 3, 4, 5])
m[t] = "Tuple"
print(m)

