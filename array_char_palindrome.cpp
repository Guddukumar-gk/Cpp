#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array in char  ";
    cin>>n;
    char ch[n+1];
    cout<<"\nEnter the array in char : ";
    cin>>ch;
    bool check =1;

    for(int i=0;i<n;++i)
    {
        if(ch[i]!=ch[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"world id palindrome ";
    }
    else
        cout<<"world id not  palindrome ";
    
































































        // int curlen = 0,i=0,maxlen = 0;
        // int st=0,maxst=0;
        // while(1)
        // {
        //     if(ch[i]==' '||ch[i]=='\0')
        //     {
        //         if(curlen>maxlen)
        //         {
        //             maxlen = curlen;
        //             maxst =st;
        //         }
        //         curlen =0;
        //         st = i+1;
        //     }
        //     else
        //     {
        //         curlen++;
        //         if(ch[i]=='\0')
        //             break;
        //         i++;
        //     }
        // }

        // cout<<maxlen<<endl;
        // for(int i=0;i<maxlen;++i)
        // {
        //     cout<<ch[i+maxlen];
        
        // }
        // return 0;

}