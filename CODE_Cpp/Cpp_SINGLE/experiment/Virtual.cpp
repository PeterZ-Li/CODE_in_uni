#include<iostream>

class Virtual
{
    private:
    int num;
    public:
    Virtual(int n):num(n)
    {}
    ~Virtual();
    /*void show()
    {
        std::cout<<"show "<<num+1<<std::endl;
    }*/
    virtual void show()
    {
        std::cout<<"virtual show "<<num<<std::endl;
    }
};

class Virtuall:public Virtual
{
    public:
    Virtuall();
    ~Virtuall();
    virtual void show()
    {
        std::cout<<"inherit virtual show"<<std::endl;
    }
};

int main()
{
    Virtual vir1(1);
    vir1.show();
    Virtual *p=new Virtuall();
    p->show();
}
