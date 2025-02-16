#include <iostream>
#define MULTIPLY(a, b) ((a) * (b))  // Macro to multiply two numbers

using namespace std;

void macros(int a, int b) {
    cout << MULTIPLY(a, b) << endl;  // Print the product using the macro
}

void solve() {
    int T;
    cin >> T;  // Read number of test cases

    while (T--) {
        int a, b;
        cin >> a >> b;  // Read two numbers
       macros(a, b);  // Call the function to multiply two numbers
    }
}

int main() {
    solve();
    return 0;
}
