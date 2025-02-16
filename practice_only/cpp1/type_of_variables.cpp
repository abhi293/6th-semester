// C++ program to show that we can access a global
// variable using scope resolution operator :: when
// there is a local variable with same name
#include<iostream>
using namespace std;

// Global x
int x = 0;

int main()
{
// Local x
int x = 10;
cout << "Value of global x is " << ::x;  //global variable
cout<< "\nValue of local x is " << x;     //local variable
return 0;
}

//we also local variable, instance variable, static variable, global variable, and class variable.
//local means inside a function, instance means inside a class, static means inside a function but it is not destroyed after the function ends, global means outside of all functions, and class means inside a class.
//instance variable changes for each new object creations in case of inside of a class
//note that static variable remains the same throughout the code execution (i.e basically permanent)

//constant is another type of variable that is declared using the keyword const (previously used with #define in C)
//eg: const int a = 10; //a is a constant variable or, #define a 10 (means same)