#include<iostream>
using namespace std;
class Calculation
{
    private: int num1,num2;
    public: void enter()
    {
        cout<<"Enter the value of num1: ";
        cin>>num1;
        cout<<"Enter the value of num2: ";
        cin>>num2;
    }
    public: void addition()
    {
        cout<<"\nThe sum of two numbers is: "<<num1+num2;
    }
    public: void subtraction()
    {
        cout<<"\nThe sum of two numbers is: "<<num1-num2;
    }
    public: void multiplication()
    {
        cout<<"\nThe sum of two numbers is: "<<num1*num2;
    }
    public: void division()
    {
        cout<<"\nThe sum of two numbers is: "<<num1/num2;
    }
};
int main()
{
    Calculation obj;
    obj.enter();
    obj.addition();
    obj.subtraction();
    obj.multiplication();
    obj.division();
    return 0;
}