/* Program to demonstrate working of Array of Object*/
// #include<iostream>
// using namespace std;
// class Books_Records
// {
//     private: int BookNo; string BookName;
//     public: Books_Records(int B,string N)
//     {
//         BookNo=B;
//         BookName=N;
//     }
//     public: void Display()
//     {
//         cout<<"\n Book Number is "<<BookNo<<"\tBook name is "<<BookName;
//     }

// };
// int main()
// {
//     Books_Records obj[5]={{1,"cpp"},{2,"java"},{3,"c"},{4,"c#"},{5,"php"}};
//     int i;
//     for(i=0;i<5;i++)
//     {
//         obj[i].Display();
//     }
    
// }


/* WAP to create a class Student_Management_System stores student info (Name,REgistration Number, Mobile Number)of 10 students and display records
using array of objects*/
#include<iostream>
using namespace std;
class Student_Management_System
{
    private: string name; int reg_no, m_no;
    public: Student_Management_System(string a, int b, int c)
    {
        name=a;
        reg_no=b;
        m_no=c;
    }
    public: void Display()
    {
        cout<<"\nName: "<<name<<"\tregistration number: "<<reg_no<<"\tmobile number: "<<m_no;
    }
};
int main()
{
    Student_Management_System obj[5]={{"nipun",1234,999999},{"harman",1234,999999},{"jaidev",1234,999999},{"ridhi",1234,999999},{"ujval",333,999999}};
    int i;
    for(i=0;i<5;i++)
    {
        obj[i].Display();
    }

}