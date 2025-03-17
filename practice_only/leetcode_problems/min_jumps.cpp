#include <iostream>
#include <vector>
using namespace std;

pair<bool, int> minJumpsAndReachable(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return {true, 0};  // Already at the end
    if (arr[0] == 0) return {false, -1}; // Can't move anywhere

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1) 
            return {true, jumps}; // Reached the end
        maxReach = max(maxReach, i + arr[i]);
        steps--;
        if (steps == 0) {
            if (i >= maxReach)
                return {false, -1}; // Cannot move further
            jumps++;
            steps = maxReach - i;
        }
    }
    return {false, -1}; // fallback, shouldn't hit here usually
}

int main() {
    vector<int> arr ;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    auto result = minJumpsAndReachable(arr);
    if (result.first)
        cout << "Reachable with minimum jumps: " << result.second << endl;
    else
        cout << "Not reachable" << endl;

    return 0;
}
