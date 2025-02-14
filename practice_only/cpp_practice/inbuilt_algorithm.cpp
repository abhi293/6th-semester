#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

//min_element, max_element, accumulate, count, find, lower_bound, upper_bound, etc there are many such inbuilt functions in algorithm header file

int main(){
    int n;
    cout<<"Enter the number of elements: "; 
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    //most functions have almost similar syntax i.e function_name(starting_iterator, ending_iterator)
    //for example, max_element(v.begin(), v.end()) returns the iterator pointing to the maximum element in the range [v.begin(), v.end())
    //we can get the value by using * before the function call

    cout<<"The maximum element is: "<<*max_element(v.begin(), v.end())<<endl;  //max_element returns the iterator pointing to the maximum element, so we use * to get the value

    cout<<"The minimum element is: "<<*min_element(v.begin(), v.end())<<endl;  //min_element returns the iterator pointing to the minimum element, so we use * to get the value

    int sum = accumulate(v.begin(), v.end(), 5);  //accumulate returns the sum of all elements in the range, the third argument is the initial value of sum

    cout<<"The sum of all elements is: "<<sum<<endl;
    int value;
    cout<<"Enter the element to find : ";
    cin>>value;

    auto it = find(v.begin(), v.end(), value);  //find returns the iterator pointing to the first occurrence of the element in the range, if not found, it returns the end iterator

    if(it != v.end()){
        cout<<"Element "<<value<< " found at index: "<<it-v.begin()<<endl;
    }
    else{
        cout<<"Element "<<value<<" not found"<<endl;
    }

    int ct = count(v.begin(), v.end(), value);  //count returns the number of occurrences of the element in the range
    cout<<"The number of occurrences of "<<value<<" is: "<<ct<<endl;

    return 0;

}