#include<iostream>
using namespace std;
int main()
{
    int num,i,flag=0;
    cout<<"Enter the number ";
    cin>>num;
    for( i=2;i<=num-1;++i)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"not a prime number ";
    }
    else
    {
        cout<<"a prime number ";
    }
}