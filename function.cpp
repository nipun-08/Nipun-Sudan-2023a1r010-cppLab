// No return type and no parameter
/*
#include<iostream>
using namespace std;
class program
{
   public: void fun() // if we don't use any access specifier it acts as a default access specifier, which is private
    {
        std::cout<<"Hi";
    }
};
int main()
{
    program obj;
    obj.fun();
    return 0;
}
*/

// Program to create a class with name Product_Info and withe a function with name Welcome_Message(), this function on execution
// will display a message on screen, "Welcome to MyStore"
/*

#include<iostream>
using namespace std;
class Product_Info
{
    public: void Welcome_Message()
    {
        cout<<"Welcome to MyStore";
    }
};
int main()
{
    Product_Info aa;
    aa.Welcome_Message();
    return 0;
}
*/

// Program to create a class and a function, function will accept user name, Registration Number from student and display
// the details entered by the user on screen

/*
#include<iostream>
using namespace std;
class Program
{
    private: string name;
    private: int rno;
    public: void accept()
    {
        cout<<"Enter your name and registration number:";
        cin>>name>>rno;
        cout<<"The user's name is: "<<name<<"\n R
        egistrarion number is: "<<rno;
    }
};
int main()
{
    Program obj;
    obj.accept();
    return 0;
}
*/

// WAP to create a class with name MYAPP and with function name, Accept() and Display(), Accept() function will accept email
// and pass. and Display()  fun, will display the information
/*
#include<iostream>
using namespace std;
class MYAPP
{
    private: string email;
    private: string password;
    public: void Accept()
    {
        cout<<"Enter your email: ";
        cin>>email;
        cout<<"\nEnter your password: ";
        cin>>password;
    }
    void Display() //Here the variables email and password will be shared by the Display function as they are declared in the same class and outside of the fuction
    {
        cout<<"\nYour email is: "<<email;
        cout<<"\nYour password is: "<<password;
    }

};
int main()
{
    MYAPP obj;
    obj.Accept();
    obj.Display();

}
*/

// WAP to create a class with name MYAPP and with function name, Accept() and Display(), Accept() function will accept email
// and password as parameters and Display()  fun, will display the information
/*
#include<iostream>
using namespace std;
class MYAPP
{

    public: void Accept(string email, string password)//Formal parameter: The parameters passed while function definition
    {
        cout<<"\nYour email is: "<<email;
        cout<<"\nYour password is: "<<password;
    }
    void Display()
    {
        cout<<"\nYour email is: "<<email; //The variable email and password cannot be shared by the display function as they are declared
      //as the parameters of the accept function, thus showing the error.
        cout<<"\nYour password is: "<<password;
    }

};
int main()
{
    MYAPP obj;
    string email1,password1;
    cout<<"\nEnter your email: ";
    cin>>email1;
    cout<<"\nEnter your password: ";
    cin>>password1;
    obj.Accept(email1,password1); //Actual parameters: the parameters passed while calling the funciton
    obj.Display();

}

*/

// WAP to create a class with a function name Login() and Display_Info, Login() function will accept Pin(default value 123) from user as
// parameter and Display_Info() function will accept Name, RegNo, Marks, Percentage and Grade from user as Parameter and display all information
// enterd by user on Screen with Welcome Message
#include <iostream>
using namespace std;
class cred
{
public:
    int Login(int pin)
    {
        if (pin == 123)
        {
            return 1;
        }
        else
        {
            cout << "Login Failed";
            return 0;
        }
    }
    void Display(string name, int regno, int marks, float percentage, string grade)
    {
        cout << "\nWelcome: " << name << "\nRegistration NUmber: " << regno << "\nYour marks are: " << marks << "\nYour percentage is: " << percentage << "\nYour Grade is:" << grade;
    }
};
int main()
{
    int c, Pin;
    string Name;
    int Regno;
    int Marks;
    float Percentage;
    string Grade;
    cout << "\nEnter your pin: ";
    cin >> Pin;
    cred obj;
    c = obj.Login(Pin);
    if (c == 1)
    {
        cout << "\nEnter your name: ";
        cin >> Name;
        cout << "\nEnter your registration no.: ";
        cin >> Regno;
        cout << "\nEnter your marks: ";
        cin >> Marks;
        cout << "\nEnter your Percentage: ";
        cin >> Percentage;
        cout << "\nEnter your Grade: ";
        cin >> Grade;
        obj.Display(Name, Regno, Marks, Percentage, Grade);
    }
    return 0;
}
