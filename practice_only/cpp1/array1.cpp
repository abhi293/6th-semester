// C++ program to find the array element that appears only
// once , using XOR
/*
how it works:
The best solution is to use XOR. XOR of all array elements gives us the number with a single occurrence. The idea is based on the following two facts. 

XOR of a number with itself is 0. 
XOR of a number with 0 is number itself.
Let us consider the above example.  
Let ^ be xor operator as in C and C++.

res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4

Since XOR is associative and commutative, above 
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
*/
#include <iostream>
using namespace std;

int findSingle(int ar[], int ar_size)
{
    // Do XOR of all elements and return
    int res = ar[0];
    for (int i = 1; i < ar_size; i++)
        res = res ^ ar[i];

    return res;
}

// Driver code
int main()
{
    int ar[] = { 2, 3, 5, 4, 5, 3, 4 };
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << "Element occurring once is "
         << findSingle(ar, n);
    return 0;
}
