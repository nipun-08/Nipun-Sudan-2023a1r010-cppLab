/*Program to demonstrate implementation of Array using Direct Initialization Method*/
#include<iostream>
using namespace std;
class Program
{

    private: int adv[5]={0,1,2,3,4};
    private: int weak[5]={5,6,7,8,9}; 
    public: void Display()
    {
        cout<<adv[8];
    }

};
int main()
{
    Program obj;
    obj.Display();
}