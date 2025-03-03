#include<iostream>
using namespace std;
class Program
{
    public: Program()
    {
        cout<<"Default Constructor"; // It will be printed in the output without calling it 
    }
    public: ~Program()
    {
        cout<<"\nDestructor"; 
    }
    public: void Hello()
    {
        cout<<"\nHello";
    }
};
int main()
{
    Program obj;
    obj.Hello();
    return 0;
}