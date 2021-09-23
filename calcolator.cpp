#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the two value ";
    cin>>a>>b;
    cout<<"press 1 for add \n";
    cout<<"press 2 for sub \n";
    cout<<"press 3 for mult \n";
    cout<<"press 4 for Divi \n";
    cout<<"Please press the valid key ";
    int key;
    cin>>key;
    switch (key)
    {
    case 1: c = a+b;
        break;
    case 2: c = a+b;
        break;
    case 3: c = a+b;
        break;
    case 4: c = a+b;
        break;
    default:cout<<"please Enter valid key ";
        break;
    }
    cout<<"Result = "<<c;
}