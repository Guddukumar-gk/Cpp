#include<iostream>
using namespace std;
int main()

{
    int i,j,num;
    cout<<"Enter the size ";
    cin>>num;
    cout<<endl;
    for(i=1;i<=num;++i)
    {
        for(j=1;j<=num;++j)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}