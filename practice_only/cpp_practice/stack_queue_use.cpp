#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    stack<int> s; // LIFO
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Stack: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    queue<int> q; // FIFO
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"Queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}