//To add the details of a student using a parameterized constructor of studtent classs.
#include<iostream>
using namespace std;
class Student{
    public: string StudentName; int StudentId;
    float Marks, per;
    public: Student(string Name, int Id, float Mark)
    {
        StudentName= Name;
        StudentId= Id;
        Marks =Mark;
    }
    void Display()
    {
        cout<<"\nName = "<<StudentName<<"\t Marks are "<<Marks;
    }
};
int main()
{
    Student obj[3]={{"King",100,450},{"Neena",101,480},{"James",102,490}};
    for(int i=0;i<3;i++)
    {
        obj[i].Display();
    }
}

