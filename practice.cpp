// #include<iostream>
// using namespace std;
// class atm{
//     public: void Welcome()
//     {
//         cout<<"Welcome to the atm:";
//     }
//     private: int pin;
//     public: int authentication()
//     {
//         cout<<"\nEnter your pin:";
//         cin>>pin;
//         if(pin==1234)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     private: float wdraw;
//     public: float withdraw(float bal)
//     {
//         cout<<"\nEnter the amount you want to withdraw";
//         cin>>wdraw;
//         if(wdraw>bal)
//         {
//             cout<<"\nNot sufficient bank balance";
//         }
//         else{
//             return bal-wdraw;
//         }
//     }
//     public: void display(float amt)
//     {
//         cout<<"\nYour balance is:"<<amt;
//     }
// };
// int main()
// {
//     float balance=10000;
//     atm obj;
//     obj.Welcome();
//     int c=obj.authentication();
//     if(c==1){
//         cout<<"\nAuthentication successful";
//         float d=obj.withdraw(balance);
//         obj.display(d);
//     }
//     else
//     cout<<"\nAuthentication failed";
//     return 0;
// }
#include<stdio.h>
int main()
{
    float a,b,c;
    a=0.1;
    b=0.2;
    c=0.3;
    if(a+b==c)
    {
        printf("Hello");
    }
    else
    {
        printf("Bye");
    }
    
}