// Program to demonstrate working of Parametrized constructor or constructors with parameters
#include<iostream>
using namespace std;
class Program
{
    public: Program(string username, int pin)// Parametrized constructor
    {
        cout<<"\n Username= "<<username;
        cout<<"\n pin= "<<pin;
    }
};
int main()
{
    Program obj1("A1",123); // Here while making the object we have passed the parameterr
    Program obj2("A2",234);
}