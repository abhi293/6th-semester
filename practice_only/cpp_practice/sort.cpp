#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//sort in ascending order,  is a built-in function in C++ STL which takes 3 arguments, the start of the array, the end of the array and a function that compares the elements of the array. (2 arguments are mandatory and 1 argument is optional i.e. compare function)

int main(){
    vector<int> v = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    sort(v.begin(), v.end());//from 0th index to last index, v.begin()+1 to v.end()-1 will sort from 1st index to second last index
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}