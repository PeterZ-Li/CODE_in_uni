#include<iostream>
#include<vector>

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
        Prime pr(N);
        //use a vector to push_back, and then iterate it to find pairs of prime, at the meantime ++count
    }
};
class Prime:public Nature
{
    private:
    std::vector<int> Pr;
    public:
    Prime(int n)//to get the vector
    {
        
    }
};
class Nature
{
    private:
    int num;
    public:
    Nature(int n):num(n)//get the scale of the nature
    {
    }
    bool isPrime()//judge the nature
    {
        
    }
};
int main()
{
    int N;
    std::cin>>N;
    Guess pr(N);
    pr.tell();
    return 0;
}