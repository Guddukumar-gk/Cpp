#include<iostream>
using namespace std;
int main()
{
    int arr1[20],arr2[20],arr3[20];
    cout<<"Enter the size of array ";
    int n;
    cin>>n;
    cout<<"Enter the first array of  elements :  ";
    int i=1;
    while(i<n)
    {
        cin>>arr1[i];
        i=i+1;
    }
    cout<<"Enter the second array of  elements :  ";
    int j=1;
    while(j<n)
    {
        cin>>arr1[j];
        j=j+1;
    }
    i=0,j=0;
    int k=0;

    // merging starts
    while(i<n && j<n)
    {
        if(arr1[i]<=arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    i=0;
    while(i<n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    j=0;
    while(j<n)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    i=0;
    while(i<n+n)
    {
        cout<<arr3[i]<<" ";
        i++;
    }
    return 0;



}