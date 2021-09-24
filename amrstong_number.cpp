#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"Enter the number ";
    cin>>num;
    int temp=num;
    while (num!=0)
    {
        rem = num%10;
        sum =sum+rem*rem*rem;
        num=num/10;

    }
    if(temp==sum)
    {
        cout<<"this is armstrong number ";
    }
    else
    {
        cout<<"not a armstrong number ";
    }
    
}