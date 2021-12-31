#include<iostream>
using namespace std;
class a
{
    public:
    void print()
    {
        cout<<"\nthis is class first a\n";
    }
};
class b
{
    public:
    void show()
    {
        cout<<"\nthis is class b\n";
    }
};
class show_C:public a,public b
{
    public:

    void show_c()
    {
        cout<<"\nthis is class c\n";
    }
};
int main()
{
    show_C v;
    v.print();
    v.show();
    v.show_c();
    
}