#include<iostream>
using namespace std;
class ATM_App{
    public: void Welcome()
    {
        cout<<"Welcome to ATM.";
    }
    private: int pin;
    public: string Validate()
    {
        cout<<"\nEnter your pin";
        cin>>pin;
        if(pin==123){
            return "True";
        }
        else {
            return "False";
        }
    }
    private: float wamt;
    public: float Withdraw(float Bamt)
    {
        cout<<"\nEnter Amount you want to withdraw ";
        cin>>wamt;
        if(wamt>Bamt)
        {
            cout<<"\nInsufficient Balance";
        }
        else{
            return Bamt-wamt;
        }
    }
    public: void Display_Balance(float amt)
    {
        cout<<"\nYour balance is"<<amt;
    }
};
int main()
{
   ATM_App obj;
   string res;
   float res1;
   float amt1=10000.50;
   obj.Welcome();
   res=obj.Validate();
   if(res=="True")
   {
    cout<<"\nLogin Successful";
    res1=obj.Withdraw(amt1);
    obj.Display_Balance(res1);
   }
   else{
    cout<<"Login Unsuccessful";
   } 
   return 0;
}