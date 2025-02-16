// Fibonacci Series using Binet's Nth-term Formula
#include<iostream>
#include<cmath>
using namespace std;

int fib(int n)
{
    double phi = (sqrt(5) + 1) / 2;     
    return round(pow(phi, n) / sqrt(5));
}

// Driver code
int main()
{
    int n = 9;

    cout << fib(n);
    return 0;
}

// This code is contributed by Sapna Kul


/*
using formula to calculate fibonacci series
// C++ Program to find n'th fibonacci Number
#include<iostream>
#include<cmath>

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;   // golden ratio formula
  return round(pow(phi, n) / sqrt(5));
}

// Driver Code
int main ()
{
  int n = 9;
  std::cout << fib(n) << std::endl;
  return 0;
}
//This code is contributed by Lokesh Mohanty.
*/