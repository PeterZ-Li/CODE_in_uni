#include<iostream>

class Shape
{
    public:
    Shape()=default;
    virtual int GetPerimeter()=0;
};

class Rectangle:public Shape
{
    private:
    int side;
    public:
    Rectangle(int a):side(a)
    {}
    int GetPerimeter()
    {
        return 4*side;
    }
};

class Circle:public Shape
{
    private:
    int radius;
    public:
    Circle(int r):radius(r)
    {}
    int GetPerimeter()
    {
        return 3.14*2*radius;
    }
};

int main()
{
    Rectangle re(4);
    std::cout<<"Perimeter is "<<re.GetPerimeter()<<std::endl;
    Circle ci(3);
    std::cout<<"Perimeter is "<<ci.GetPerimeter()<<std::endl;
    return 0;
}