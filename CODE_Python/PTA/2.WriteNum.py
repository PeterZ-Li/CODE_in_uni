n=input()
sum=0
for i in n:
    sum=sum+int(i)
sum=str(sum)
num=["ling","yi","er","san","si","wu","liu","qi","ba","jiu"]
for i in sum[:-1]:
    print(num[int(i)],end=' ')
print(num[int(sum[-1])])