#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the size ";
    cin>>num;
    cout<<endl;
    int i,j;

    for(i=1;i<=num;++i)
    {
        for(j=1;j<=num-i;++j)
        {
            cout<<" ";
        }
        for(;j<=num;++j)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
}