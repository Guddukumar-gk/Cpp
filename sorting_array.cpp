#include<bits/stdc++.h>
using namespace std;
// binary search

int binary_search(int a[],int n,int key)
{
    int beg =0;
    int end=n-1;
    int  mid = (beg+end)/2;
    int i=1;
    while(beg<=end && mid!=key)
    {
        if(a[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            beg = mid+1;
        }
        mid = (beg+end)/2;
    }
    if(a[mid]==key)
    {
        return mid;
    }
    else
    {
        return -1;
    }

}

// selection sort of swap number 
void swap(int *pa,int *bp)
{
    int temp = *pa;
    *pa = *bp;
    *bp  = temp;

}

// selection sort function 

void selection_sort(int a[],int n)
{
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
   
}

// print function

void printArray(int a[],int n)
{
    for(int i=1;i<=n; ++i)
    {
        cout<<a[i]<<" ";
    }

}

// linear search function

int linear_search(int a[],int n,int key)
{
    int i=1;
    while(i<=n)
    {
        if(a[i]==key)
        {
            return i;
        }
        i=i+1;
    }
    return -1;
}

// main function

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n],i=1;
    while(i<=n)
    {
        cin>>a[i];
        i++;
    }

// linear searching  calling  function

    int key;
    cout<<"\nEnter the key for search : ";
    cin>>key;
    cout<<linear_search(a,n,key);

// selection sort of calling function

    cout<<"\nselection sorted after array\n";
    selection_sort(a,n);
    printArray(a,n);

// binary searching call function

    cout<<"\nEnter the key for search : ";
    cin>>key;
    cout<<binary_search(a,n,key)<<endl;
}