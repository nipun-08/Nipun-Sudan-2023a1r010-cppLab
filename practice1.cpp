#include<iostream>
using namespace std;
class details
{
    public:
    void display(string name, int age, int pin)
    {
        cout<<"\nYour name is: "<<name;
        cout<<"\nYour age is: "<<age;
        cout<<"\nYour pincode is: "<<pin;
    }
};
int main()
{
    string name;
    int pin,age;
    cout<<"\nEnter your name:";
    cin>>name;
    cout<<"\nEnter your age:";
    cin>>age;
    cout<<"\nEnter your pincode:";
    cin>>pin;
    details obj;
    obj.display(name,age,pin);
    return 0;
}