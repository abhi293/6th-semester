// C++ Program to demonstrate a catching of
// Derived exception and printing it successfully
#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};
int main()
{
	Derived d;
	// Some other functionalities
	try {
		// Monitored code
		throw d;
	}
	catch (Derived d) {     //if base class was mentioned first before Derived d, then it would have caught Base Exception, and the 2nd catch block would have been unreachable, so prefer to mention Derived d first
		cout << "Caught Derived Exception";
	}
	catch (Base b) {
		cout << "Caught Base Exception";
	}
	getchar(); // To read the next character
	return 0;
}