n=int(input())
Name=[]
ID=[]
Grade=[]
while n>0:
    name,id,grade=map(str,input().split())
    Name.append(name)
    ID.append(id)
    Grade.append(int(grade))
    n-=1
max=min=Grade[0]
indexmax=indexmin=0
for i in range(len(Grade)):
    if Grade[i]>max:
        max=Grade[i]
        indexmax=i
    elif Grade[i]<min:
        min=Grade[i]
        indexmin=i
print(Name[indexmax]+" "+ID[indexmax])
print(Name[indexmin]+" "+ID[indexmin])