// Let us see how namespace scope the entities including variable and functions:


// Namespaces provide a method for preventing name conflicts in large projects. Symbols declared inside a namespace block are placed in a named scope that prevents them from being mistaken for identically-named symbols in other scopes.
#include <iostream>
using namespace std;

// first name space
namespace first_space
{
   void func()   //using namespace, we can declare same function name in different namespace , multiple times
   {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space
{
   void func()
   {
      cout << "Inside second_space" << endl;
   }
}


namespace ns1
{
    int value()    { return 5; }
}
namespace ns2 
{
    const double x = 100;
    double value() {  return 2*x; }
}


namespace ns         //namespace can also have Classes within it
{
    // A Class in a namespace
    class geek
    {
    public:
        void display()
        {
            cout<<"ns::geek::display()"<<endl;;
        }
    };
}


int main()
{
    // Access value function within ns1
    cout << ns1::value() << '\n';

    // Access value function within ns2
    cout << ns2::value() << '\n';

    // Access variable x directly
    cout << ns2::x << '\n';

    // Calls function from first name space.
   first_space::func();
    // Calls function from second name space.
   second_space::func();

    // Create an object of geek class and access it's member functions
     ns::geek obj;
     obj.display();  //or, directly call ns::geek().display(); to avoid creating object

   return 0;
}

// If we compile and run above code, this would produce the following result:
// Inside first_space
// Inside second_space