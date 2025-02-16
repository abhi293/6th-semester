#include <iostream>
using namespace std;

// first name space
namespace first_space
{
   void func()
   {
      cout << "Inside first_space" << endl;
   }
   // second name space
   namespace second_space
   {
      void func()
      {
         cout << "Inside second_space" << endl;
      }
   }
}
using namespace first_space::second_space;  //doing so, we don't need to explicitly mention the namespace name while calling the function
int main ()
{
 
   // This calls function from second name space.
   func();  //instead, if we don't use using namespace, we need to mention the namespace name explicitly eg, first_space::second_space::func();

   return 0;
}

// If we compile and run above code, this would produce the following result:
// Inside second_space