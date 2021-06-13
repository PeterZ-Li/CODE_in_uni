#include<iostream>

class Complex
{
    private:
    int RealNum;
    int ImaginaryNum;
    public:
    Complex(int rn,int in=1):RealNum(rn),ImaginaryNum(in)
    {
        std::cout<<"Construct "<<RealNum<<std::endl;
    }
    ~Complex()
    {
        std::cout<<"Destroy "<<RealNum<<std::endl;
    }
    Complex operator+(Complex&comp)//construct a Complex object, and at the end of this way, destroy this object
    {
        this->RealNum+=comp.RealNum;
        this->ImaginaryNum+=comp.ImaginaryNum;
        return *this;
    }
    void show()
    {
        std::cout<<RealNum<<'+'<<ImaginaryNum<<'i'<<std::endl;
    }
};

int main()
{
    Complex c1(2),c2(3,4);
    c1.operator+(c2);
    c1.show();
    return 0;
}