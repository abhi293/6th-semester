//next greater element using stack and vector

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr = {4, 5, 2, 10, 8};
    stack<int> s;
    vector<int> nge(arr.size(), -1); //initializing with -1 for each corresponding element of vector arr

    for(int i=0; i<arr.size(); i++){ //traversing through the array
        while(!s.empty() && arr[s.top()] < arr[i]){ //if stack is not empty and top element of stack is less than current element

            nge[s.top()] = arr[i]; //then update the nge of top element of stack with current element

            s.pop(); //pop the top element of stack

        }
        s.push(i);//push the current element to stack
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"-->"<<nge[i]<<endl;
    }

    return 0;
}