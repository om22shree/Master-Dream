import collections

# Everything to do with arrays and their use as stack :-

# Creation :-
arr = [1, 4, 5, 3, 2]

# Iteration :-
for i, key in enumerate(arr):
    print(i, key)

# Sorting the array :-
arr.sort(reverse = True)
print(arr)

# Reversing the array :-
arr.reverse()
print(arr)

# Creation of a subarray :-
print(arr[1:3])

# Accessing elements from the end :-
for i in range(len(arr)):
    print(arr[-i-1])

# Lists as string :-
s = ['Om', 'Anand', 'Rohit', 'Sinha']
print(s)

# String slicing :-
print(s[1:3])

# Strings are immutable.
# String join :-
res = " ".join(s)
print(res)

# Iteration :-
for i, key in enumerate(res) :
    print(i, key)


# Using it as a stack :-
st = []
st.append(10)
st.append(20)
st.append(30)
print(st)
print(st[-1])
print("Pop form stack:", st.pop())




# Everything to do with math library :-
import math
a = 10
b = 3

# Basic Operations :-
print(a + b)
print(a / b)
print(a * b)
print(a % b)
print(a ** b)
# fmod for consistent modulus function :-
print(int(math.fmod(a, b)))

# floor rounds down :-
print(math.floor(a/b))

# ceil rounds up :-
print(math.ceil(a/b))

# pow(a, b) finds the power a**b
print(math.pow(a, b))

# sqrt(n) finds the square root of n :-
print(math.sqrt(a*b))

