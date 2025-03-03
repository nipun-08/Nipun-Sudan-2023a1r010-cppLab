#include<iostream>
using namespace std;
class Circle
{
    public: float area(float radius)
    {
        cout<<"The area of the circle is: "<< 3.14*radius*radius;
    }
};
int main()
{
    int a;
    cout<<"Enter the radius of circle: ";
    cin>>a;
    Circle obj;
    obj.area(a);
}