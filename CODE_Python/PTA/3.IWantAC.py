def isPTA(string):
    for s in string:
        if s!='P' and s!='T' and s!='A':
            return False
    return True
def relation(fir,sec,tri):
    if sec == 0:
        print("NO")
    elif sec == 1:
        if fir == tri:
            print("YES")
        else:
            print("NO")
    elif sec>1:
        if tri == (fir*sec):
            print("YES")
        else:
            print("NO")
def isAC(string):
    if isPTA(string):
        first,second,tried= -1,0,0
        for i in range(len(string)):
            if string[i] == 'P':
                first=i
            elif string[i] == 'T' and first != -1:
                second=i-1-first
                if i==len(string)-1:
                    tried=i-1-second-first
            elif i==len(string)-1:
                tried=i-1-second-first
        relation(first,second,tried)
    else:
        print("NO")
n=int(input())
while n!=0:
    str=input()
    isAC(str)
    n-=1