#include<iostream>
using namespace std;
class Area
{
    private: float c;
    public: void setDim(float len,float breadth)
    {
        c=len*breadth;
    }
    public: float getArea()
    {
        return c;
    }
};
int main()
{
    Area obj;
    float len, breadth,d;
    cout<<"Enter the length of rectangle: ";
    cin>>len;
    cout<<"Enter the breadth of rectangle: ";
    cin>>breadth;
    obj.setDim(len,breadth);
    d=obj.getArea();
    cout<<"The area of rectangle is: "<<d;
    return 0;
}