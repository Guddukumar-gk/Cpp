#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int i=0;
    cin.ignore();
    bool check = 1;
    char arr[n+1];
    cout<<"Enter the world : ";
    cin.getline(arr,n);
    while(i<n/2)
    {
       if(arr[i]!=arr[n-1-i])
        {
            int temp = arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i] = temp;
        }
        i++;
    }
    for(i=0;i<=n;++i)
    {
        cout<<arr[i]<<" ";
    }

}