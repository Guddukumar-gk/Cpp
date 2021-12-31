#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;

    int temp = num;
    int sum=0;
    int i=1;
    while(num!=0)
    {
        int rev = num%10;
        num  = num/10;
        sum = sum*10+rev;
    }
    if(temp == sum)
    {
        cout<<"this is palindrome ";
    }
    else
        cout<<"this is  not palindrome ";
}