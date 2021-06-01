#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#define N 4

std::string identity[][N]=
{
    "Mike Barnes","Male","1","4.0",
    "Jim Nickerson","Male","2","3.0",
    "Jack Indabox","Male","3","2.5",
    "Jane Miller","Female","4","3.6",
    "Mary Scott","Female","4","2.7",
};
/*struct STUDENT
{
    std::string name;
    std::string sex;
    int grade;
    float gpa;
}stu1;
STUDENT students[N]
{
    NAME[0],SEX[0],1,4.0,
    NAME[1],SEX[0],2,3.0,
    NAME[2],SEX[0],3,2.5,
    NAME[3],SEX[1],4,3.6,
    NAME[4],SEX[1],4,2.7,
};*/

class Student
{
    private:
    std::string name;
    std::string sex;
    int grade;
    float gpa;
    
    public:
    Student(std::string str)
    {
        name=str[0];
        sex=str[1];
        grade=std::stoi(str[2]);
        gpa=
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

int main()
{
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