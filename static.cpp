/* Normal variable vs static variable inside the function

//   Normal Variable  


#include<iostream>
using namespace std;
class Program
{
    public: void Fun()
    {
        int a=0;
        a++;
        cout<<"\nValue of a is: "<<a;

    }
};
int main()
{
    Program obj1;
    obj1.Fun();
    Program obj2;
    obj2.Fun();
    Program obj3;
    obj3.Fun();
}



//   *** Static Variable:


#include<iostream>
using namespace std;
class Program
{
    public: void Fun()
    {
       static int a=0;
        a++;
        cout<<"\nValue of a is: "<<a;

    }
};
int main()
{
    Program obj1;
    obj1.Fun();
    Program obj2;
    obj2.Fun();
    Program obj3;
    obj3.Fun();
}

*/

/* WAP to create a class with Name CountUser, create a function with name count(), this function will display total number of users for this 
class


#include<iostream>
using namespace std;
class CountUser
{
    public: int a;
    public: void count()
    {
       static int a=0;
        a++;
        cout<<"\nTotal number of user is: "<<a;
    }
};
int main()
{
    CountUser user1;
    user1.count();
    CountUser user2;
    user2.count();
    CountUser user3;
    user3.count();
    CountUser user4;
    user4.count();
}




// *** Static Function

// Program to demonstrate the working of static function in a class
#include<iostream>
using namespace std;
class Program
{
    public: int a =1;  //Normal class variable
    static int b;    //Static variable
    void Fun1()     //Member Function of class
    {
        cout<<"\nValue of a in Fun1 "<<a;
        cout<<"\nValue of b in Fun2 "<<b;  // **Non static function can access both static and non static memeber of a class
    }
    static void Fun2()     //Static Function of class
    {
       // cout<<"\nValue of a in Fun1 "<<a;   **This will generate an error as static members cannot access non static member of class because
       //they are dependent on instance or object of class for their existence and static function  belongs to class directly and are not
       //dependent on object of class for their existence;
        cout<<"\nValue of b in Fun2 "<<b;
    };
};
int Program ::b=1;  //*** Initializing static variable outside the class (by default it's value will be zero)
int main()
{
    Program::Fun2(); //**Calling static function, without object of class 
    Program obj;
    obj.Fun2();
}




// *** Static Class: no direct method to make a static class but it can be done by making every member of a class(variable and function)as static

//Normal object 


#include<iostream>
using namespace std;
class Program
{
    public: Program()
    {
        cout<<"\n Constructor Invoked"; 
    }
    public: ~Program()
    {
        cout<<"\n Destructor Invoked"; 
    }
    void Display()
    {
        cout<<"\nMember function of class";
    }
};
void Fun1()   //Function with class object
{
    Program obj1; //creating class object
    obj1.Display(); //calling member function of class
}
int main()
{
    Fun1();  //Calling Function with class object
    cout<<"\nRecalling Function";
    Fun1();
    return 0;
}

*/


//Static object

#include<iostream>
using namespace std;
class Program
{
    public: Program()
    {
        cout<<"\n Constructor Invoked"; 
    }
    public: ~Program()
    {
        cout<<"\n Destructor Invoked"; 
    }
    void Display()
    {
        cout<<"\nMember function of class";
    }
};
void Fun1()   //Function with class object
{
    static Program obj1; //creating class object
    obj1.Display(); //calling member function of class
}
int main()
{
    Fun1();  //Calling Function with class object
    cout<<"\nRecalling Function";
    Fun1();
    return 0;
}




// WAP to create a class with name InterestApp, create function to calculate compound interest using static variable, create function with
// month name e.g Jan(), Feb etc with return status of Interest Paid or not , if interest paid , then calculate Interest Rate on same amount
// if interest not paid, calculate compound interest?
