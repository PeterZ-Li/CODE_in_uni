people=[1 for element in range(30)]
count=0
down=0
i=0
print("下船的人的编号：",end=' ')
while down<15:
    if i>29:
        i=0
    else:
        if people[i]==0:
            i+=1
            continue
        else:
            count+=1
            if count==9:
                people[i]=0
                count=0
                down+=1
                print(i,end=' ')
                i+=1
            else:
                i+=1    