#include<iostream>
using namespace std;
class a
{
    public:
    int x,y;
};
class rectangle :public a
{
    public:
    int area(int x,int y)
    {
        return(x*y);
    }

};
class cube : public rectangle
{
    public:
    int volume(int x,int y,int z)
    {
        return(x*y*z);
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the values ";
    cin>>a>>b>>c;
    rectangle r;
    cube v;
    cout<<"this is single inheritance "<<r.area(a,b)<<endl;
    cout<<"this is multi level inheritance "<<v.volume(a,b,c)<<endl;


}