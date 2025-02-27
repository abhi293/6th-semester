#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to check if a number is a palindrome
    bool isPalindrome(int num) {
        int rev = 0, original = num;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev == original;
    }

    // Function to check if all elements in the array are palindromes
    bool allPalindromes(vector<int>& arr) {
        for (int num : arr) {
            if (!isPalindrome(num)) return false;
        }
        return true;
    }
};

// Driver Code
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " positive integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    if (obj.allPalindromes(arr)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}
