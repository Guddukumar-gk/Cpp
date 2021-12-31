#include<iostream>
using namespace std;

class student
{
    public:
    virtual void base()
    {
        cout<<"this is base class\n";
    }
    virtual void show()
    {
        cout<<"this is first show class\n";
    }

};
class derived:public student
{
    public:
    void base()
    {
        cout<<"this is derived class\n";

    }
    void show()
    {
        cout<<"this is show derived class\n";
    }

};
int main()
{
    int temp;
    student*bptr;
    derived d;
    bptr = &d;
    bptr->base();
    bptr->show();
}