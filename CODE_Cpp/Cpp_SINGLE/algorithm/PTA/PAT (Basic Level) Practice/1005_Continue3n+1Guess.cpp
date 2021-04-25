#include<iostream>
#include<new>//add new
class Guess//完成（3n+1）猜想
{
    private:
    int num;
    public:
    Guess(int a):num(a)
    {

    }
    bool parity()
    {
        if(num%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int discount()//return the guessnum to compare
    {
        //while(num!=1)
        //{
            if(parity())
            {
                num=num/2;
                return num;
            }
            else
            {
                num=(3*num+1)/2;
                return num;
            }
        //}
    }
};

class KeyNum//输入数字，得到一串数字猜想的关键数字
{
    private:
    int n,guessnum=0;
    int *num=new int[n];
    public:
    KeyNum(int b):n(b)//store num into *num circularly
    {
        for(int i=0;i<n;i++)
        {
            std::cin>>num[i];//change the way to express array
            getchar();
        }
    }
    void TellNum()//need to creat Guess object
    {
        for(int i=0;i<n;i++)
        {
            if(num[i]!=0)
            {
                Guess gu(num[i]);
                while(guessnum!=1)
                {
                    guessnum=gu.discount();
                    CompareNum();
                }
            }
            guessnum=0;
        }
        for(int i=0;num[i]!='\0';i++)
        {
            for(int j=i+1;num[i]!='\0';j++)
            {
                if(num[i]<num[j])
                {
                    int t=num[i];
                    num[i]=num[j];
                    num[j]=t;
                }
            }
        }
        for(int i=0;num[i]!='\0';i++)
        {
            if(num[i+1]!='\0')
            {
                std::cout<<num[i]<<" ";
            }
            else
            {
                std::cout<<num[i];
            }
        }
    }
    /*void StoreNum()
    {
        don't need to store guessnum, I don't know how many they are,so it is quite difficult to store them.
    }*/
    void CompareNum()//need to use discount
    {
        for(int i=0;i<n;i++)
        {
            if(guessnum==num[i])
            {
                num[i]='\0';
            }
        }
    }
};

int main()
{
    int n;
    std::cin>>n;
    KeyNum kn(n);
    kn.TellNum();
    return 0;
}