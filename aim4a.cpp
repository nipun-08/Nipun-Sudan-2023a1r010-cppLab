// To search student details by roll no using a member function of a student class
#include<iostream>
using namespace std;
class Student{
    public:string StudentName; int rollno,Marks;
    
    public: Student(string Name , int Id ,int Mark){
        StudentName=Name;
        rollno =Id;
        Marks = Mark;

    }
void Display(){
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
}
int search()
{
    int id1;
    cout<<"\n Enter your Student Id";
    cin>>id1;
    return id1;

}

};
int main(){
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    string a;int b,c,id2,i,count=0;
    for(int i=0;i<4;i++)
    {
        obj[i].Display();
        //obj[i].search(obj[i]);
    }
    id2=obj[1].search();
    for(i=0;i<5;i++)
    {
        if(id2==obj[i].rollno)
        {
            cout<<"\nStudent Id is valid";
            cout<<"\nStudent name is "<<obj[i].StudentName;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"\nStudent doesnot exist";
    }

    
    return 0;
}
