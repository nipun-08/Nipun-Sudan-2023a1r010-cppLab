// Prime number between 1 to 100
#include<iostream>
using namespace std;
class prime
{
    public: void calculation()
    {

        int i,n,c,count=0;
    for(n=2;n<=100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count=count+1;
            }
        }
        if(count==0)
        {
            cout<<n<<endl;
        }
        count=0;
    } 
    }
};
int main()
{
    prime obj;
    obj.calculation();
    return 0;
}
