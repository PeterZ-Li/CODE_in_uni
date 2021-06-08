#include<iostream>
#define N 12
class Person
{
    private:
    std::string name,adress,phonenum;
    int age,salary;
    char sex;
    public:
    Person(std::string ns,std::string as,std::string phonum,int ag,int sal,char se):
    name(ns),adress(as),phonenum(phonum),age(ag),salary(sal),sex(se)
    {}
    virtual void show();
};

class Teacher:public Person
{
    private:
    std::string title;
    public:
    Teacher(std::string ns,std::string as,std::string phonum,int ag,int sal,char se,std::string tit):
    Person(ns,as,phonum,ag,sal,se)
    {
        title=tit;
    }
    void show();
};

class Cadre:public Person
{
    private:
    std::string job;
    public:
    Cadre(std::string ns,std::string as,std::string phonum,int ag,int sal,char se,std::string jo):
    Person(ns,as,phonum,ag,sal,se),job(jo)
    {}
    void show();
    std::string ReJob()
    {
        return job;
    }
};

class TeacherCadre:public Teacher,public Cadre
{
    public:
    TeacherCadre(std::string ns,std::string as,std::string phonum,int ag,int sal,char se,std::string tit,std::string jo):
    Teacher(ns,as,phonum,ag,sal,se,tit),Cadre(ns,as,phonum,ag,sal,se,jo)
    {}
    void show();
};

void Person::show()
{
    std::cout<<name<<" "<<adress<<"　"<<phonenum<<" "<<age<<" "<<salary<<" "<<sex<<std::endl;
}
void Teacher::show()
{
    Person::show();
    std::cout<<title<<" "<<std::endl;
    return;
}
void Cadre::show()
{
    Person::show();
    std::cout<<job<<" "<<std::endl;
    return;
}
void TeacherCadre::show()
{
    Teacher::show();
    std::cout<<Cadre::ReJob()<<std::endl;
}

int main()
{
    std::string nam,adr,pho,titl,jobs;
    std::cin>>nam>>adr>>pho>>titl;
    Teacher teacher(nam,adr,pho,40,100000,"M",titl);
    std::cin>>nam>>adr>>pho>>jobs;
    Cadre ca(nam,adr,pho,40,100000,"M",jobs);
    std::cin>>nam>>adr>>pho>>titl>>jobs;
    TeacherCadre teca(nam,adr,pho,40,100000,"M",titl,jobs);
    teacher.show();
    ca.show();
    teca.show();
    return 0;
}


