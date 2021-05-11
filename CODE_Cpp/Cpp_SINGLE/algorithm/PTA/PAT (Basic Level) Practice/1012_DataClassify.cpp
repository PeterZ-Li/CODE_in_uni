#include<iostream>

class Classification
{
    private:
    int N,n,total;//classify n one by one
    struct sort//use a struct to define A
    {
        int A1,A2,A3,A5;
        float A4;
    }A;
    public:
    Classification(int N):N(N)//need to classify n one by one, use classify()
    {
        while(N--)
        {
            std::cin>>n;
            classify();
        }
    }
    void classify()//classify a number from keyboard
    {
        int temp,count=1;
        temp=n%5;
        switch (temp)
        {
        case 0:
            {
                if(n/2==0)
                {
                    A.A1+=n;
                }
            }
            break;
        case 1:
            {
                if(count)
                {
                    A.A2+=n;
                    count=0;
                }
                else
                {
                    A.A2-=n;
                    count=1;
                }
            }
            break;
        case 2:
            {
                A.A3++;
            }
            break;
        case 4:
            {
                total++;
                A.A4+=n;
            }
            break;
        case 5:
            {
                if(n>A.A5)
                {
                    A.A5=n;
                }
            }
            break;
        default:
            break;
        }
        return;
    }
    void show()//show the struct A
    {
        if(A.A1)
        {
            std::cout<<A.A1<<" ";
        }
        else
        {
            std::cout<<"N"<<" ";
        }
        if(A.A2)
        {
            std::cout<<A.A2<<" ";
        }
        else
        {
            std::cout<<"N"<<" ";
        }
        if(A.A3)
        {
            std::cout<<A.A3<<" ";
        }
        else
        {
            std::cout<<"N"<<" ";
        }
        if(A.A4)
        {
            std::cout<<"%.1d"<<A.A4/total;
        }
        else
        {
            std::cout<<"N"<<" ";
        }
        if(A.A5)
        {
            std::cout<<A.A5;
        }
        else
        {
            std::cout<<"N";
        }
        return;
    }
};
int main()
{
    int N;
    std::cin>>N;
    Classification cla(N);
    cla.classify();
    cla.show();
    return 0;
}