//To update the details of a student using a member function of student class.
/*Create student class with parameterized function, add details of 1 students with attributes like Name, RollNo, Marks, Credits
create display function to display records on screen. 
Create three functions Semester1()
Semester2()
Semester3()
all three semesters functions stores copy of Marks attribute with them and retrieve value of Name,Rollno, credits from Student class.
Create update function() to update attributes of Student class.
Create delete function() to delete student record.*/
#include<iostream>
using namespace std;
class student{
    public:
    string Name;int rollno,credits,marks;
    student(string a, int b, int c,int d)
    {
        Name=a;
        rollno=b;
        credits=c;
        marks=d;
    }
    void display()
    {
        cout<<"\nName : "<<Name<<", Rollno. : "<<rollno<<", credits: "<<credits<<", Marks: "<<marks<<"\n";
    }
};
void Semester1(student obj1) // object as pass by value
{
    cout<<"\nSemester 1: \n";
    obj1.marks=450;
    obj1.display();
}
void Semester2(student obj2) // object as pass by value
{
    cout<<"\nSemester 2: \n";
    obj2.marks=420;
    obj2.display();
}
void Semester3(student obj3) // object as pass by value
{
    cout<<"\nSemester 3: \n";
    obj3.marks=430;
    obj3.display();
}
void Update(student &obj4)
{ 
    obj4.marks=450;
    obj4.credits=23;
    cout<<"\nAfter Updation:\n";
}
void Delete(student *o)
{
    o -> Name="0";
    o -> rollno=0;
    o -> credits=0;
    o -> marks=0;
}
int main()
{
    student obj("Harman",1233,5,480);
    obj.display();
    Semester1(obj);
    Semester2(obj);
    Semester3(obj);
    Update(obj);
    obj.display();
    Delete(&obj);
    obj.display();
    return 0;
}
