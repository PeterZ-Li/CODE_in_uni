#include<iostream>

class Destruction
{
    private:
    int num;
    static int count;
    public:
    Destruction(int n=0):num(n)
    {
        std::cout<<"instruct"<<++count<<std::endl;
    }
    ~Destruction()
    {
        std::cout<<"destruct"<<--count<<std::endl;
    }
};
int Destruction::count=0;

int main(void)
{
    Destruction des1(1);
    Destruction *p=new Destruction;
    delete p;
    return 0;
}