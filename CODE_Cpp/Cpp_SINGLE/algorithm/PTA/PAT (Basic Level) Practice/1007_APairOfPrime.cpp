#include<iostream>
#include<vector>

class Nature//mind the order of the class, especially you need to use the class in other class
{
    private:
    int num;
    friend class Guess;
    public:
    Nature(int n):num(n)//get the scale of the nature. error: no the scale of nature, but just the nature.
    {
    }
    bool isPrime()//judge the nature
    {
    if(num == 1 || num == 0)
    return false;
    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0)
        return false;
    }
    return true;
    }
};
class Guess
{
    private:
    int N;
    public:
    Guess(int n):N(n)
    {
    }
    void tell()
    {
        std::vector<Nature> Pr;// get the scale of nature, get the prime vector
        for(int i=2;i<N;i++)
        {
            Nature nat(i);
            if(nat.isPrime())
            {
                Pr.push_back(nat);
            }
        }
        //and then iterate it to find pairs of prime, at the meantime ++count
        int count=0;
        for(int i=0;i<(int)Pr.size();i++)
        {
            if((Pr[i+1].num-Pr[i].num)==2)
            {
                count++;
            }
        }
        std::cout<<count;
    }
};
/*class Prime:public Nature
{
    private:
    std::vector<Nature> Pr;
    friend class Guess;
    public:
    Prime(int n):Nature(n)//to get the vector
    {
        for(int i=2;i<n;i++)
        {
            Nature nat(i);
            if(nat.isPrime())
            {
                Pr.push_back(nat);
            }
        }
    }
};*/
/*class Nature
{
    private:
    int num;
    friend class Guess;
    public:
    Nature(int n):num(n)//get the scale of the nature. error: no the scale of nature, but just the nature.
    {
    }
    bool isPrime()//judge the nature
    {
    if(num == 1 || num == 0)
    return false;
    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0)
        return false;
    }
    return true;
    }
};*/
int main()
{
    int N;
    std::cin>>N;
    Guess pr(N);
    pr.tell();
    return 0;
}