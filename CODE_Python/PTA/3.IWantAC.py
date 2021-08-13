n=int(input())
#cut=["","",""]
#CutLine,flag=0,True
while n!=0:
    cut=["","",""]
    CutLine,flag=0,True
    str=input()
    for i in str:
        if i=='A':
            cut[CutLine]+=i
        elif i=='P' and CutLine==0:
            CutLine=1
        elif i=='T' and CutLine==1:
            CutLine=2
        else:
            flag=False
            break
    if flag is True and CutLine==2:
        if len(cut[1])>=1 and cut[2]==len(cut[1])*cut[0]:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
    n-=1