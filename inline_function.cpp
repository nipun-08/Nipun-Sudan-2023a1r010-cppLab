/*WAP to create two classes ,
1. Class Login_Details,
with function as:-
a. Validate() accept login password(default 1234) from user
b. Display(): desplay message on screen "Welcome to MyAPP"
2. Class User_Profile
with function as: 
a. Accept() acccept username, email id and name from user
b. Display() will display information entered by the user on screen
*/

#include<iostream>
using namespace std;
class Login_Details
{
    
    public: bool Validate(int c)
    {
        if(c==1234)
        {
            Display();
            return true;
        }
        else 
        {
            return false;
        }
    }
    public: void Display()
    {
        cout<<"\nWelcome to MyApp";
    }
};
class User_Profile
{
    private: string username, email, name;
    public: void Accept()
    {
         cout<<"\nEnter your username: ";
         cin>>username;   
         cout<<"\nEnter your email: ";
         cin>>email;   
         cout<<"\nEnter your name: ";
         cin>>name;   
    }
    public: void Display()
    {
        cout<<"\nYour username is : "<<username;
        cout<<"\nYour email: "<<email;  
        cout<<"\nYour name: "<<name;   
    }
};
int main()
{
    int pin;
    cout<<"\nEnter your pin: ";
    cin>>pin;
    Login_Details obj;
    User_Profile obj1;
    if(obj.Validate(pin))
    {
        obj1.Accept();
        obj1.Display();
    }
    else
    {
        cout<<"\nIncorrect Pin";
    }
    return 0;
}