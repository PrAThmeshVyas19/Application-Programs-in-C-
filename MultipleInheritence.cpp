#include<iostream>
using namespace std;
class Base1
{
    public:
        int A;

};

class Base2
{
    public:
        int I,J,K;

};

class Derived : public Base2 , Base1
{
    public:
        int X,Y;

};

int main()
{


    return 0;
}