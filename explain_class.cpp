#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    bool gender;
    void printinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;

    }

};
int main()
{
    student a[3];
    int i;
    for(i=0;i<3;++i)
    {
        cout<<"Name : ";
        cin>>a[i].name;
        cout<<"Age : ";
        cin>>a[i].age;
        cout<<"Gender : ";
        cin>>a[i].gender;
        cout<<"\n";
    }
    cout<<"\n***********************************************************\n";
    for(i=0;i<3;++i)
    {
        a[i].printinfo();
        cout<<"\n";
    }
}