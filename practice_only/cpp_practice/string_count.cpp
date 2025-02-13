#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m; //initialize map
    cout<<"Enter the number of strings you want to enter : ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++; //string is a unique key now (if found in the map, will automatically increase the counter)
    }
    cout<<"string count in lexicographical order\n"<<endl;

    for(auto it:m){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}