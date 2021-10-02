n=int(input())
list1=list(map(int,input().split()))
list2=list1.copy()

def guess(a):
    if a%2==1:
        a=(3*a+1)/2
    elif a%2==0:
        a=a/2
    return a

for i in list1:
    while i!=1:
        i=guess(i)
        for j in list2:
            if i==j:
                list2.remove(j)

list2.sort(reverse=True)
print(" ".join(str(i) for i in list2))