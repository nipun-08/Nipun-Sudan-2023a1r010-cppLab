/* Question 1:

#include<iostream>
using namespace std;
class Area
{
    public: Area(float len, float breadth)
    {
       cout<<"\nThe area of rectangele is: "<<len*breadth;
    }
};
int main()
{
    float len, breadth;
    cout<<"Enter the len and breadth of rectangle: ";
    cin>>len>>breadth;
    Area obj(len,breadth);
}
*/

/* Question 2:

#include<iostream>
using namespace std;
class Calculation
{
    private: int num1,num2;
    
    public: Calculation(int n1,int n2)
    {
        num1=n1;
        num2=n2;
        addition();
        subtraction();
        multiplication();
        division();
      
    }
    void addition()
    {
        cout<<"\nThe addition of two numbers is: "<<num1+num2;
    }
    void subtraction()
    {
        cout<<"\nThe subtraction of two numbers is: "<<num1-num2;
    }
    void multiplication()
    {
        cout<<"\nThe multiplication of two numbers is: "<<num1*num2;
    }
    void division()
    {
        cout<<"\nThe division of two numbers is: "<<num1/num2;
    }

};
int main()
{
    int a,b;
    cout<<"Enter the num1 and num2 value: ";
    cin>>a>>b;
    Calculation obj(a,b);
}

*/

/* Question 3

#include<iostream>
using namespace std;
class Volume
{
    public: Volume(float a)
    {
        cout<<"The volume of cube is "<<a*a*a;
    }
};
int main()
{
    float a;
    cout<<"Enter the len of side of cube: ";
    cin>>a;
    Volume obj(a);
}
*/
/*

#include<iostream>
using namespace std;
class area
{
    public: area(int a,int b)
    {
        cout<<"\nThe area of rectangle is"<<a*b;
    }
    public: area(int a)
    {
        cout<<"\nThe area of circle is"<<3.14*a*a;
    }
};
int main()
{
    area obj(1,2);
    
}

*/

#include<iostream>
using namespace std;
class ATM
{
    public: ATM(int a,float b)
    {
        Accountno=a;
        balance=b;
        Welcome();
    }

    private: int Accountno,pin,choice;
    float balance;
    public: float Welcome()
    {
        cout<<"\nWelcome to the ATM: ";
        cout<<"\nPlease enter your pin:";
        cin>>pin;
        if(pin==Accountno)
        {
            cout<<"\nPin verified:";
            cout<<"\nEnter 1 to deposit money and 2 to withdraw money: ";
            cin>>choice;
            if(choice==1)
            {
                deposit();
            }
            else if(choice==2)
            {
                withdraw();
            }
            else
            {
                cout<<"\nInv;alid Choice";
            }
    
            
        }
        else {
            cout<<"\nWrong Pin";
        }
    }
    private: float dep,with;
    public: void deposit()
    {
        cout<<"\nEnter the amount you want to deposit: ";
        cin>>dep;
        cout<<"\nThe balance after depositing the amount is: "<<balance+dep;

    }
    public: void withdraw()
    {
        cout<<"\nEnter the amount you want to withdraw: ";
        cin>>with;

        if(with>balance)
        {
            cout<<"\nInsufficient Balance";
        }
        else{
            cout<<"\nThe remaining balance is: "<<balance-with;
        }
    }
};
int main()
{
    ATM obj(1234,1000);
    return 0;
}
