#include<iostream>
using namespace std;
class even_odd
{
    public:
    int num;
    void find()
    {
        if(num%2==0)
        {
            cout<<"Even number ";
        }
        else
        {
            cout<<"Odd number ";
        }
    }
};
int main()
{
    even_odd obj;
    cout<<"Enter the value ";
    cin>>obj.num;

    obj.find();
   
   
}

