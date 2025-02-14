#include<iostream>
#include<stack>
#include<string>
#include<map>
#include<unordered_map>
using namespace std;

unordered_map<char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};  //concept : if the bracket is opening bracket then it will have negative value and if it is closing bracket then it will have positive value
string isBalanced(string s){
    stack<char>st;
    for(char brackets:s){
        if(symbols[brackets]<0){
            st.push(brackets); //pushing opening brackets
        }
        else{
            if(st.empty() || symbols[brackets]+symbols[st.top()]!=0){ //same type of brackets will give sum = 0, otherwise it will give non-zero value
                return "NO";
            }
            st.pop();
        }
    }
    if(st.empty()){
        return "YES"; //if stack is empty then it is balanced
    }
    else{
        return "NO";
}
}


//accepted brackets: '(', ')', '{', '}', '[', ']'

int main(){
    string s;
    cout<<"Enter the string of brackets: ";
    cin>>s;
    cout<<isBalanced(s)<<endl;
    return 0;
}