#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cout<<"Enter the number whose the find factorial number ";
    cin>>num;
    for(int i=1;i<=num;++i)
    {
        fact = fact*i;
    }
    cout<<"result "<<fact;
    
}