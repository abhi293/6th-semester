#include <iostream>
using namespace std;

class MyExcept1 {};

class MyExcept2
{
public:

	// Conversion constructor
	MyExcept2 (const MyExcept1 &e )
	{
		cout << "Conversion constructor called";
	}
};

int main()
{
	try
	{
		MyExcept1 myexp1;
		throw myexp1;
	}
	catch(MyExcept2 e2)
	{
		cout << "Caught MyExcept2 " << endl;
	}
	catch(...)
	{
		cout << " Default catch block " << endl;
	}
	return 0;
}

//in the above program, we are throwing MyExcept1 object, but catching MyExcept2 object, so the catch block will not be executed, and the default catch block will be executed

// Output:
// Default catch block

/*
check the following code:
#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 'x';
	}
	catch(int x)
	{
		cout << " Caught int " << x;
	}
	catch(...)
	{
		cout << "Default catch block";
	}
}

Output:
Default catch block  , because we are throwing char, but catching int
*/