#include<iostream>
using namespace std;
class student 
{
    int x,y;
    public:
    void print(int a,int b)
    {
        x =a;
        y = b;
    }
    friend float m(student b);
};
float m(student b)
{
    return(b.x+b.y)/2;
}
int main()
{
    int a,b;
    cout<<"Enter the two number ";
    cin>>a>>b;
    student obj;
    obj.print(a,b);
    cout<<"mean value -->"<<m(obj);

}