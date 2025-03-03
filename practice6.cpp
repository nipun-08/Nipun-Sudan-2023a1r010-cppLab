#include<iostream>
using namespace std;
class ATM
{
    private: int Accountno=1234,pin,choice;
    float balance=1000;
    public: float Welcome()
    {
        cout<<"Welcome to the ATM: ";
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
                cout<<"\nInvalid Choice";
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
    ATM obj;
    obj.Welcome();
    return 0;
}