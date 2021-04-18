#include<iostream>

class Step
{
    public:
    Step()
    {
    }
    ~Step()
    {
    }
    bool parity(int a)
    {
        if(a%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void discount(int b)
    {
        int CountStep=0;
        while(b!=1)
        {
            if(parity(b))
            {
                b=b/2;
                CountStep++;
            }
            else
            {
                b=(3*b+1)/2;
                CountStep++;
            }
        }
        std::cout<<CountStep<<std::endl;
    }
};

int main()
{
    int n;
    std::cin>>n;
    Step st;
    st.discount(n);
    return 0;
}