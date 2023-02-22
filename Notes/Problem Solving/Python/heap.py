import heapq

# Everything related to max as well as min heap :-

# Min-Heap :-
heap = [24, 56, 72, 96, 100]
heapq.heapify(heap)
print(heap)

# Heap push :-
heapq.heappush(heap, 200)
heapq.heappush(heap, 148)
heapq.heappush(heap, 276)

# Heap pop :-
print(heapq.heappop(heap))
print(heapq.heappop(heap))
print(heapq.heappop(heap))

# To access the min value :-
print(heap[0])



# Max heap :-
# There is no default max-heap declaration : work around is to make values -ve... and play with maths.
mheap = []
heapq.heappush(mheap, -200)
heapq.heappush(mheap, -148)
heapq.heappush(mheap, -276)

# Printing elements of max-heap
for x in mheap:
    print(-1 * x, end=" ")
print('\n')

# Max values is always at the front :-
print(-1 * mheap[0])
