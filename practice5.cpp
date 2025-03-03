#include<iostream>
using namespace std;
class details
{
    private: string studid,name,sem,branch;
    public: void enter()
    {
        cout<<"\nEnter your student id: ";
        cin>>studid;
        cout<<"\nEnter your name: ";
        cin>>name;
        cout<<"\nEnter your sem: ";
        cin>>sem;
        cout<<"\nEnter your branch: ";
        cin>>branch;
    }
    public: void display()
    {
        cout<<"\nStudent id: "<<studid;
        cout<<"\n Name: "<<name;
        cout<<"\n Sem: "<<sem;
        cout<<"\n Branch: "<<branch;
    }
};
int main()
{
    details obj;
    obj.enter();
    obj.display();
    return 0;
}