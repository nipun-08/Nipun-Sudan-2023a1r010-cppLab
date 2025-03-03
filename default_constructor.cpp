// Program to demonstrate working of default constructor
#include<iostream>
using namespace std;
class Program
{
    public: Program()
    {
        cout<<"Default Constructor"; // It will be printed in the output without calling it 
    }
    
};
int main()
{
    Program obj;
    return 0;
}
