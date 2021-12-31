#include<iostream>
using namespace std;
int main()
{
    int fact=1,no,i;
    cout<<"Enter the value ";
    cin>>no;
    for(i=1;i<=no;++i)
    {
        fact*=i;
    }
    cout<<fact<<endl;
}