#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // **1. Using lower_bound and upper_bound with vector**
    vector<int> vec = {1, 2, 4, 4, 4, 5, 6};
    cout << "Vector:\n";

    auto vec_lb = lower_bound(vec.begin(), vec.end(), 4);  //use iterator in case of STL containers, otherwise pointers (it is a pointer for STL)
    auto vec_ub = upper_bound(vec.begin(), vec.end(), 4);

    cout << "Lower Bound of 4 in vector: Index " << (vec_lb - vec.begin()) << endl;//difference between the iterator and the beginning of the vector
    cout << "Upper Bound of 4 in vector: Index " << (vec_ub - vec.begin()) << endl;

    cout << "Frequency of 4 in vector: " << (vec_ub - vec_lb) << endl;
    cout << "----------------------------------------\n";

    // **2. Using lower_bound and upper_bound with set**
    set<int> s = {1, 2, 4, 5, 6};
    cout << "Set:\n";

    auto set_lb = s.lower_bound(4);  //declaration of lower/upper bound for sets
    auto set_ub = s.upper_bound(4);
    cout << "Lower Bound of 4 in set: " << (set_lb != s.end() ? to_string(*set_lb) : "Not Found") << endl;
    cout << "Upper Bound of 4 in set: " << (set_ub != s.end() ? to_string(*set_ub) : "Not Found") << endl;
    cout << "----------------------------------------\n";

    // **3. Using lower_bound and upper_bound with map**
    map<int, string> m = {{1, "One"}, {2, "Two"}, {4, "Four"}, {5, "Five"}, {6, "Six"}};
    cout << "Map:\n";

    auto map_lb = m.lower_bound(4); //declaration of lower/upper bound for maps
    auto map_ub = m.upper_bound(4);
    cout << "Lower Bound of 4 in map: " << (map_lb != m.end() ? to_string(map_lb->first) + " -> " + map_lb->second : "Not Found") << endl;
    cout << "Upper Bound of 4 in map: " << (map_ub != m.end() ? to_string(map_ub->first) + " -> " + map_ub->second : "Not Found") << endl;

    return 0;
}
