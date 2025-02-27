// C++ program of th above approach
#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

int swapBits(unsigned int x,unsigned int p1,unsigned int p2,unsigned int n)
{
    /* xor contains xor of two sets */
    unsigned int set1 = ((x >> p1) ^ (x >> p2)) & ((1U << n) - 1);

    /* To swap two sets, we need to again XOR the xor with
     * original sets */
    return x ^ ((set1 << p1) | (set1 << p2));
}

// Driver code
int main()
{
    int res = swapBits(28, 0, 3, 2);
    cout << "Result = " << res;
    return 0;
}


/*
how it works?
Example

Input:
x = 28 (11100)
p1 = 0 (Start from first bit from right side)
p2 = 3 (Start from 4th bit from right side)
n = 2 (No of bits to be swapped)
Output:
7 (00111)
The 2 bits starting from 0th position (from right side) are
swapped with 2 bits starting from 4th position (from right side)

Solution
We need to swap two sets of bits. XOR can be used in a similar way as it is used to swap 2 numbers. Following is the algorithm. 

1) Move all bits of the first set to the rightmost side
   set1 =  (x >> p1) & ((1U << n) - 1)
Here the expression (1U << n) - 1 gives a number that 
contains last n bits set and other bits as 0. We do & 
with this expression so that bits other than the last 
n bits become 0.
2) Move all bits of second set to rightmost side
   set2 =  (x >> p2) & ((1U << n) - 1)
3) XOR the two sets of bits
   xor = (set1 ^ set2) 
4) Put the xor bits back to their original positions. 
   xor = (xor << p1) | (xor << p2)
5) Finally, XOR the xor with original number so 
   that the two sets are swapped.
   result = x ^ xor

*/