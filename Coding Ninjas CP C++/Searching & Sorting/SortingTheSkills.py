# write your code here
for _ in range(int(input())):
    n = int(input())
    arr = [int(x) for x in input().split()]
    
    i,j = 0,1
    while(i<n and j<n):
        if arr[i] == arr[j]+1:
            arr[i],arr[j] = arr[j],arr[i]
            while(i>0 and arr[i] == arr[i-1]-1):
                arr[i],arr[i-1] = arr[i-1],arr[i]
                i-=1
            i = j
            j = i+1
        else:
            i+=1
            j+=1
    flag = 1
    for i in range(1,n):
        if arr[i-1]>arr[i]:
            flag = 0
            break
    print("Yes" if flag == 1 else "No")