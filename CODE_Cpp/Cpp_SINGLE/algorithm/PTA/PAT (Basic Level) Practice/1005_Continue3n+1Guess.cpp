#include<iostream>

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

    }
    int dicount()//return the guessnum to compare
    {

    }
};

class KeyNum//输入数字，得到一串数字猜想的关键数字
{
    private:
    int n;
    int *num=new int[n];
    public:
    KeyNum(int b):n(b)//store num into *num circularly
    {

    }
    void TellNum()//need to creat Guess object
    {
        
    }
    /*void StoreNum()
    {
        don't need to store guessnum, I don't know how many they are,so it is quite difficult to store them.
    }*/
    void CompareNum()//need to use discount
    {

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