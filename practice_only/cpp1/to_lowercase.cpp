// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
string toLower(string &s){
// code here
for(char &c : s){
    c=tolower(c);
}
return s;
}
};

// Driver code
int main() {
int t; // number of test cases
cin >> t;
while (t--) {
string s;
cout<<"Enter the string: ";
cin >> s;
Solution ob;
cout << ob.toLower(s) << endl;
}
return 0;
}