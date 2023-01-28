#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;  // Instance variable
        int j;  // Instance variable
        static int k;   //Class variable
        static int l;   // cLASS vARIABLE

        Demo()      // Default Constructor
        {
            i = 0;
            j = 0;
        }
        Demo(int a , int b) // Parameterised Constructor
        {
            i = a;
            j = b;
        }
        // void fun(const Demo *this)
        void fun()  // Instance method
        {
            // Static + non static
            cout<<"Inside non static method fun\n";
            cout<<"Value of i : "<<this->i<<"\n";
            cout<<"Value of j : "<<this->j<<"\n";
            cout<<"Value of k : "<<k<<"\n";
            cout<<"Value of l : "<<l<<"\n";
        }
        // static void gun()
        static void gun()   // class method
        {
            // Static
            cout<<"Inside static method gun\n";
            cout<<"Value of k : "<<k<<"\n";
            cout<<"Value of l : "<<l<<"\n";
        }
};
//  Load time variables
int Demo::k = 0;    // Good programming practice to initialise static variable
//  after the class and before the main() Function.
int Demo::l = 0;

int main()
{
    cout<<"Inside main\n";
    cout<<"Value of k : "<<Demo::k<<"\n";  //  0
    Demo::gun();   
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;
    cout<<sizeof(obj1);  // 8 Byte
    
    cout<<"Value of i in obj1 :"<<obj1.i<<"\n";    // 10
    cout<<"Value of i in obj2 :"<<obj2.i<<"\n";    // 20

    cout<<"Value of j in obj1 :"<<obj1.j<<"\n";    // 11
    cout<<"Value of j in obj2 :"<<obj2.j<<"\n";    // 21

    obj1.fun();     // fun(&obj1);
    obj2.fun();

    obj1.gun();     // Demo::gun();  <--- Interview

    return 0;
}
//  Sizeof object is summation of its non static characteristics;
//  sizeof(obj) = sizeof(i) + sizeof(j);
//  sizeof(obj) = 4 + 4;
//  sizeof(obj) = 8 ;