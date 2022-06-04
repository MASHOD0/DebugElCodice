print("enter the number of elements")
n=int(input())
print("enter the elements")
for _ in range(n):
    a=int(input())
    l.append(a)
    sort(l)
    print("enter the target")
    target= int(input())
    i = 0
    j = n -1
    while i<j:
        sum = l[i]+l[j]
        if abs(sum-target)<min:
            l = i
            h = j
            min = abs(sum-target)
        if sum<target:
            i+=1
        else:
            j-=1
    print(f"closest is {l} and {h}")