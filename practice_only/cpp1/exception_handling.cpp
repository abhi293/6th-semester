#include<iostream>
using namespace std;

void f1() throw (int)
{
    cout << "F1 begins \n";
    throw 100; // Exception is thrown here
    cout << "F1 ends \n"; // This will not execute
}

void f2() throw (int)
{
    cout << "F2 begins \n";
    f1(); // Call to f1
    cout << "F2 ends \n"; // This will not execute
}

void f3() throw (int)
{
    cout << "F3 begins \n";
    try
    {
        f2(); // Call to f2
    }
    catch (int x)
    {
        cout << "Caught Exception \n"; // Exception is caught here
    }
    cout << "F3 ends \n";
}

//if try block finds a throw statement, it will not execute the remaining statements in the try block, it will directly go to catch block
//if catch block finds a throw statement, it will not execute the remaining statements in the catch block, it will directly go to the next catch block
int main()
{
    f3(); // Call to f3
    cout << "Bye ... \n";
    return 0;
}