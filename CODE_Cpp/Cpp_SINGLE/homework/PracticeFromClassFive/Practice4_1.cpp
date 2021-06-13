#include<iostream>
class CEmployee
{
//    private://derived class also can not use it
//    int a;
    protected:
    float m_salary;
    public:
    CEmployee()
    {
        m_salary=2000;
    }
    virtual ~CEmployee()=default;
    virtual void Salary()=0;//change it to a pure virtual way
};

class CSalesman:public CEmployee
{
    private:
    float sales;
    public:
    CSalesman(float s):sales(s)
    {}
    void Salary()
    {
        m_salary=m_salary+sales*0.05;
        std::cout<<m_salary<<std::endl;
    }
};

class CDeskman:public CEmployee
{
    private:
    int time;
    public:
    CDeskman(int t):time(t)
    {}
    void Salary()
    {
        if(time>=8)
        {
            m_salary+=100;
        }
        std::cout<<m_salary<<std::endl;
    }
};

class CBuyer:public CEmployee
{
    private:
    int cost;
    public:
    CBuyer(int c):cost(c)
    {}
    void Salary()
    {
        if(cost/100)
        {
            m_salary=(1+0.1*(cost/100))*m_salary;
        }
        std::cout<<m_salary<<std::endl;
    }
};

int main()
{
    CSalesman cs(1000);
    cs.Salary();
    CDeskman cd(9);
    cd.Salary();
    CBuyer cb(300);
    cb.Salary();
    return 0;
}