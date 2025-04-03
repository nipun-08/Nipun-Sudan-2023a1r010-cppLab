/*
// eg:1

#include<iostream>
using namespace std;
class Program {
    public: const int a=1;   //Constant variable a
    void Display()
    {
        cout<<"Value of a is "<<a;
    }
    void Update()
    {
        a=5;   //This will raise error
    }
};
int main()
{
    Program obj;
    obj.Display();
}



// eg:2

#include<iostream>
using namespace std;
class Program{
    public: int b; //Local variable
    Program (const int a) // Constant varibale inside parameterized constructor... We can also pass the value to constant variable using constructor,
    // to initilize any local variable with read only
    {
        b=a;
    }
    void Display()
    {
        cout<<"Value of a is : "<<b;
    }
    void Update()
    {
        a=5; //This will raise error
    }
};
int main() 
{
    Program obj(5);
    obj.Display();
}




***We donot have constant class in cpp, but we can change class behaviour to act as constant by making it's member variable, functions and instances
   of class as constant

*/

//Program to demonstrate constant members in Program

#include<iostream>
using namespace std;
class Program{
    public: const int a=1; //constant member variable
    int b=2;   // normal member variable
    public: void Fun1() const //Constant Function
    {
        a=2; //This will raise error, as constant function donot modify value of constant variables or normal variables
        b=5; 
        cout<<"Value of a is "<<a;
        cout<<"\nValue of b is "<<b;
    }
    void Fun2()
    {
        a=3; //This will raise error as we cannot update value of constant variable after initialization
        b=6;
        cout<<"\nValue of a is "<<a;
        cout<<"\nValue of b is "<<b;
    }
};
int main()
{
    const Program obj1; //Constant instance of a class
    obj1.Fun1();  //constant object can call only constant member
    obj1.Fun2();  //This will generate error as we cannot call normal function with constant object of class
    Program obj2;  //Normal object of class
    obj2.Fun1(); //can call both normal and constant function
    obj2.Fun2(); 
}


