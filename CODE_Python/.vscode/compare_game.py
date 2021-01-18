num=10
print('GUESS WHAT I THINK')
bingo=False
while bingo==False:
    answer=int(input())
    if answer<num:
        print('too small')
    if answer>num:
        print("too big")
    if answer==num:
        print('BINGO')
        bingo=True    