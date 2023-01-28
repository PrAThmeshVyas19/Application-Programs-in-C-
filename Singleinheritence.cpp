#include <iostream>
using namespace std;

class Base
{
    public:
        int A , B;

        Base()
        {
            cout<<"Inside base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base     //  class Derived extends Base (Java Syntax)
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

int main()
{
    // Derived dobj;        // Static Memory allocation
    
    Derived * ptr = NULL;

    ptr = new Derived;      // Dynamic Memory allocation

    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}