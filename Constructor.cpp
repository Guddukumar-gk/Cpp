#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    bool gender;
    student()
    {
        cout<<"\nDefault constructors\n";
    }
    student(string s,int a,bool g)
    {
        name = s;
        age =a;
        gender = g;
        cout<<"\nParameterized constructors\n";

    }
    student(student &a)
    {
        cout<<"\nCopy constructors\n";
        a.printinfo();
    }
    void pr()
    {
        cout<<"\nName : "<<name<<endl;
    }

    void printinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;

    }

};
int main()
{
    student();
    student a("guddu",20,0);
    a.printinfo();
    student b =a;
}