#include<iostream>
using namespace std;
class index
{
    private: int n,a[100],x;
    public: index()
    {
        int size;
        cout<<"Enter the size of array";
        cin>>size;
        n=size;
    }
    public: void array()
    {
        cout<<"Enter the elements of array\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the index position";
        cin>>x;
        cout<<"The element at index position: "<<x<<" is: ";
        cout<<a[x];
    }

};
int main()
{
    index obj;
    obj.array();
}