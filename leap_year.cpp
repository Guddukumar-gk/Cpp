#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the Year ";
    cin>>year;
    if(year%4==0)
    {
        cout<<"leap year ";
    }
    else
    cout<<"not a leap year ";
}