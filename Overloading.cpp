#include<iostream>
using namespace std;

class Overloading
{
    public:
    // Add@2ii (Mangled name)
    int Add(int a , int b)          // 1000(Address)
    {
        cout<<"Addition of 2 integers \n";
    }
    // Add@2ff
    float Add(float a , float b)    // 2000
    {
        cout<<"Addition of floats\n";
    }
    // Add@2dd
    double Add(double a , double b) // 3000
    {
        cout<<"Addition of  doubles\n";
    }
    // Add@3iii
    int Add(int a , int b , int c)  // 4000
    {
        cout<<"Addition of 3 integers \n";
    }
    // Fun@2if
    void Fun(int a , float b)
    {}
    // Fun@2fi
    void Fun(float x , int y)
    {}
};
int main()
{
    Overloading obj;

    obj.Add(11,21);         // Call 1000
    obj.Add(11,21,51);      // Call 4000
    obj.Add(10.9,89.5);     // Call 3000
    obj.Add(10.9f,89.5f);   // Call 2000
    return 0;
}
/*
sizeof('A'); // 1
sizeof(11); // 4
sizeof(88.90) ;  // 8
sizeof(88.90f); // 4

int i = 10;
printf("%d",i);     // 10
printf("%d", sizeof(++i));  // 4
printf("%d" , i);   // 10
*/
