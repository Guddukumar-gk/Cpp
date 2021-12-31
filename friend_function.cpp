#include<iostream>
using namespace std;
class ABC
{
    private:
    int x,y;
    public:
    void fun(int a ,int b)
    {
        x=a;
        y = b;
       
    }
     friend float mean(ABC a);
};
float mean(ABC a)
{
    return(a.x+a.y)/2;

}
int main()
{
    int a,b;
    cout<<"Enter the value ";
    cin>>a>>b;
    ABC obj;
    obj.fun(a,b);
    cout<<"Mean value --> "<<mean(obj);

}