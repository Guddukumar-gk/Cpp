#include<iostream>
using namespace std;
int main()
{
    int no,i,j;
    cout<<"Enter the triangle size ";
    cin>>no;
    cout<<endl;
    for(i=1;i<=no;++i)
    {
        for(j=1;j<=i;++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}