/*

//Program for Single Level Inheritence
#include<iostream>
using namespace std;
class Parent 
{
    public: Parent()
    {
        cout<<"Parent class constructor";
    }
    void Fun1()
    {
        cout<<"\nParent class Function";
    }
    public: ~Parent()
    {
        cout<<"\nParent class Destructor";
    }
};
class Child : public Parent  //Syntax: class_name sign_of_inheritance i.e (:) public parent_class_name
{
    public: Child()
    {
        cout<<"\nChild class constructor";
    }
    void Fun2()
    {
        cout<<"\nChild class Function";
    }
    public: ~Child()
    {
        cout<<"\nChild class Destructor";
    }
};
int main()
{
    Child obj;
    obj.Fun1();
    obj.Fun2();
    return 0;
}

*/

//Example: Single Level Inheritance
// a. WAP to create a base class with name MyApp b. create a function with name Welcome_message(), to display welcome message on screen 
//c. create a function with Login(), accept pin from user and validate pin against value 123, other function will execute only after successful login
//d. create a function Accept(), store student information like , Registration number, marks
//e. create a function Display() to display information entered by the student 
//f. create a derived class with name Grade_Cal
//g. create a function Calc(), read marks from MyApp class 
//and function Cal() to calculate percentage and grades as per following:-
// Percentage between 80 to 100 A Grade
// Percentage between 70 to 80 B Grade
// Percentage between 60 to 70 C Grade
// otherwise not Qualified

#include<iostream>
using namespace std;
class MyApp
{
    public: int pin=123, rno, marks;
    public: void Welcome_message()
    {
        cout<<"\nWelcome";
    }
    int Login(int a)
    {
        if(pin==a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void Accept()
    {
        cout<<"\nEnter your registration number:";
        cin>>rno;
        cout<<"\nEnter your marks:";
        cin>>marks;
    }
    void Display()
    {
        cout<<"\nRegistration Number: "<<rno<<" marks: "<<marks;
    }
};
class Grade_cal : public MyApp
{
    private: float percentage;
    public: void Cal()
    {
        percentage=marks/5;
        if(percentage>80 && percentage<=100)
        {
            cout<<"\nYou got A grade";
        }
        else if(percentage>70 && percentage<=80)
        {
            cout<<"\nYou got B grade";
        }
        if(percentage>60 && percentage<=70)
        {
            cout<<"\nYou got C grade";
        }
        }
};
int main()
{
    int a,b,pin;
    Grade_cal obj;
    obj.Welcome_message();
    cout<<"\nPlease enter the pin";
    cin>>pin;
    a=obj.Login(pin);
    if(a==1)
    {
        obj.Accept();
        obj.Display();
        obj.Cal();
    }
    if(a==0)
    {
        cout<<"\nYou have entered wrong pin";
    }
}