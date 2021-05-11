#include<iostream>
#include <iomanip>//correct float number's precision

class Classification
{
    private:
    int N,n,total=0,count=1,correct=0;//classify n one by one
    struct sort//use a struct to define A
    {
        int A1=0,A2=0,A3=0,A5=0;
        float A4=0;
    }A;
    public:
    Classification(int N):N(N)//need to classify n one by one, use classify()
    {
        while(Classification::N--)
        {
            std::cin>>n;
            classify();
        }
    }
    void classify()//classify a number from keyboard
    {
        int temp;
        temp=n%5;
        switch (temp)
        {
        case 0:
            {
                if(n%2==0)//find the even number
                {
                    A.A1+=n;
                }
            }
            break;
        case 1://A2 maybe the 0, but there is operation
            {
                correct=1;
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
        case 3:// the statement is wrong
            {
                total++;
                A.A4+=n;
            }
            break;
        case 4:// the statement is wrong
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
        if(correct)
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
            std::cout<<std::fixed<<std::setprecision(1)<<A.A4/total<<" ";//correct the precision of number in 0.1
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
    //cla.classify();repeat classify
    cla.show();
    return 0;
}