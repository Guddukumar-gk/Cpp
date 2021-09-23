#include<iostream>
using namespace std;
int main()
{
    int principle,rate,time;
    cout<<"Enter the account ";
    cin>>principle;
    cout<<"Enter the Rate ";
    cin>>rate;
    cout<<"Enter the time ";
    cin>>time;
    float pl = principle*rate*time;
    float si = pl/100;
    cout<<"This simple Insterest =  "<<si<<endl;
    cout<<"This is Total Amount  = "<<principle+si;
    

}