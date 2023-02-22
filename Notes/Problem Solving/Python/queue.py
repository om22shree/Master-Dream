import collections

# Everything related to queue and dequeue :-

# Initialization from dequeue :-
q = collections.deque()
q.append(1)

# Appending from a list :-
for x in [2, 3, 4, 5, 6] :
    q.append(x)
print(q)

# Iteration on a queue :-
for x in q:
    print(x, end=" ")
print('\n')

# Pop operations :-
print(q.pop())
print(q.popleft())



