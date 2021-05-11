#include<iostream>

class Nature
{
    private:
    int low,high,num=2,scount=0,count=1;
    public:
    Nature(int m,int n):low(m),high(n)
    {}
    void countprime()//count and control the whole progress
    {
        if(low==high&&low==1)
        {
            std::cout<<2;
        }
        while(count<=high)
        {
            while(count>=low-1&&count<high)
            {
                if(isprime())
                {
                    count++;//count connect with prime, but change later than prime
                    show();
                }
            }
            if(isprime())
            {
                count++;
            }
        }
    }
    bool isprime()//judge if it is prime
    {
        num++;
        for(int i=2;i<num;i++)
        {
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