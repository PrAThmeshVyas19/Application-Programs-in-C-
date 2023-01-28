#include<iostream>
using namespace std;

class Base
{
    //   int X;  // Will automatically considered as Private
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"Value of public i: "<<i<<"\n";   // Allowed;
            cout<<"Value of public j: "<<j<<"\n";   // Allowed;
            cout<<"Value of public k: "<<k<<"\n";   // Allowed;
        }
};

int main()
{
    Base bobj;
    cout<<"Value of public i: "<<bobj.i<<"\n";  // Allowed;
    // cout<<"Value of public j: "<<bobj.j<<"\n";  // NA;
    // cout<<"Value of public k: "<<bobj.k<<"\n";  // NA;

    bobj.fun();

    return 0;
}