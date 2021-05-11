#include<iostream>
#include<math.h>

class Nature
{
    private:
    int low,high,num=2,scount=0,count=1;
    public:
    Nature(int m,int n):low(m),high(n)
    {}
    void countprime()//count and control the whole progress
    {
        if(low==1)
        {
            show();//solve the problem by '1'
        }
        while(count<=high)
        {
            if(count>=low-1)
            {
                while(count>=low-1&&count<high-1)
                {
                    if(isprime())
                    {
                        count++;//count connect with prime, but change later than prime
                        show();
                    }
                }
                return;
            }
            else if(isprime())//after the loop, can end directly, don't need to judge the prime again
            {
                count++;
            }
        }
    }
    bool isprime()//judge if it is prime
    {
        num++;
        for(int i=2;i<sqrt(num)+1;i++)//need to add sqrt(num)+1, especially "+1", it can ensure the accuracy.
        {                            //(.i.e sqrt(3)=1.7, if +1,can be correct)
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }
    void show()//output the prime by the rule
    {
        std::cout<<num;
        if(count==high)
        {
            return;
        }
        scount++;
        if(scount==10)
        {
            std::cout<<std::endl;
            scount=0;
        }
        else
        {
            std::cout<<" ";
        }
    }
};
int main()
{
    int M,N;
    std::cin>>M>>N;
    Nature nat(M,N);
    nat.countprime();
    return 0;
}