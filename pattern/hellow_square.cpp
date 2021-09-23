#include<iostream>
using namespace std;
int main()
{
    int num;
    int i,j;
    cout<<"Enter the size ";
    cin>>num;
    cout<<endl;
    for(i=1;i<=num;++i)
    {
        for(j=1;j<=num;++j);
        {
            if(j==1||i==1||i==j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}