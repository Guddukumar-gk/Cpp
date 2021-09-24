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
        sum = sum*10+rem;
        num = num/10;
    }
    cout<<"the reverse of the number is:"<<sum<<endl;
    if(temp==sum)
    {
        cout<<"This is palindrome number ";
    }
    else{
        cout<<"not a palindrome number ";
    }
} 