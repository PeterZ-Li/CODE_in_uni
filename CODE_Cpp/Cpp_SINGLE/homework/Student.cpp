#include<iostream>
#include<string>
#include<cmath>
#include<vector>

struct STUDENT
{
    std::string name;
    std::string sex;
    int grade;
    float gpa;
    STUDENT(std::string str,std::string str1,int a,float b):name(str),sex(str1),grade(a),gpa(b)
    {}
}stu1;

class Student
{
    private:
    struct Atribute
    {
        std::string name;
        std::string sex;
        int grade;
        float gpa;
    }stu;
    public:
    Student(STUDENT)
    {
        stu.name=stu1.name;
        stu.sex=stu1.sex;
        stu.grade=stu1.grade;
        stu.gpa=stu1.gpa;
    }
    ~Student()
    {

    }
    void show_myself()
    {
        std::cout<<stu.name<<" "<<stu.grade<<" "
        <<stu.sex<<" "<<stu.gpa<<std::endl;
    }
    float study_time(double study_time)
    {
        stu.gpa+=log10(study_time);
        return stu.gpa=stu.gpa>4.0? 4.0: stu.gpa;
    }
};

#define N 5
int main()
{
    STUDENT students[N]=
    {
        "Mike Barnes","Male",1,4.0,
        "Jim Nickerson","Male",2,3.0,
        "Jack Indabox","Male",3,2.5,
        "Jane Miller","Female",4,3.6,
        "Mary Scott","Female",4,2.7,
    };
    std::vector<Student> student_list;
    for(int i=0;i<N;i++)
    {
        Student student(students[i]);
        student_list.push_back(student);
    }
    for(int i=0;i<N;i++)
    {
        student_list[i].show_myself();
    }
    double studytime[N]={60,100,40,300,1000};
    for(int i=0;i<N;i++)
    {
        student_list[i].study_time(studytime[i]);
    }
        for(int i=0;i<N;i++)
    {
        student_list[i].show_myself();
    }
    return 0;
}