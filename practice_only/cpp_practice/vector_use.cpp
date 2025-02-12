#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v) {  //v means a copy, whereas &v means reference i.e same vector v
    cout << "Size: " << v.size() << endl;  //size of vector
    cout << "Data: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";  //accessing elements of vector using index
    }
    cout << endl;
}
void printVecStr(vector<string> &vs) {
    cout << "Size for vector of string: " << vs.size() << endl;  //size of vector
    for (int i = 0; i < vs.size(); ++i) {
        cout << vs[i] << " ";  //accessing elements of vector using index
    }
    vs.push_back("!!");  //adding element to vector (same array vs as it's a reference to original array)
}

int main(){
    vector<int>v;  //vector is a dynamic array from Standard Template Library
    //vector<int>v(5); //it will create a vector of size 5, each initialised 
    //with value 0, size can still be increased using push_back
    //vector<int>v(5,3); //it will create a vector of size 5 and all elements will be 3

    //push_back is used to insert elements in vector
    //pop_back is used to remove elements from vector
    //v.clear() is used to remove all elements from vector

    cout<<"Enter number of elements: ";
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cout<<"Enter "<<i+1<<"th element: ";
        int x;
        cin>>x;
        v.push_back(x);
        printVec(v); //print vector after every input
    }
    vector<int>v2(v); //it will create a copy of vector v
    //another way of representation is vector<int>v2=v; O(n) time complexity
    printVec(v);
    v2.pop_back();
    cout<<"v2 with 1 pop_back "<<endl;
    printVec(v2); //1 element less than v

    //similarly, we can use vector of strings, vector of pairs, vector of vectors etc.
    vector<string>vs; //vector of strings, dynamic string array
    vs.push_back("Hello");
    vs.push_back("World");
    printVecStr(vs);
    cout<<" "<<vs[2]<<endl;

    //vector of pairs
    vector<pair<int,int>>vp;
    vp.push_back({1,2});
    vp.push_back({3,4});
    cout<<"Vector of pairs with values (1,2) & (3,4), 1st vale of 1st pair and 2nd value of 2nd pair "<<endl;
    cout<<vp[0].first<<" "<<vp[1].second<<endl; //first value of 1st pair and second value of 2nd pair

    cout<<"array of vectors"<<endl;
    vector<int>va[3]; //array of 3 vectors (3 vectors with different sizes) i.e a 2D array but with fixed rows and varying columns
    for(int i=0;i<3;++i){
        cout<<"Enter size of "<<i<<"th vector: ";
        int n;  //size of ith vector
        cin>>n;
        for(int j=0;j<n;++j){
            cout<<j+1<<"th element for "<<i<<"th vector: ";
            int x; //content of ith vector
            cin>>x;
            va[i].push_back(x);
        }
    }
    for(int i=0;i<3;++i){
        printVec(va[i]);
    }

    cout<<"2nd element of 3rd vector: "<<va[2][1]<<endl;//note : if the element doesn't exist, it will give garbage value

    //vector of vectors is a dynamic 2D array i.e both rows and columns can be changed
    vector<vector<int>>vv;  //int x int type vectors.. we can also have vector of vector of strings
    for(int i=0;i<3;++i){ //basically means 3 rows with varying columns
        cout<<"Enter size of "<<i<<"th vector: ";
        int n;  //size of ith vector
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;++j){
            cout<<j+1<<"th element for "<<i<<"th vector: ";
            int x; //content of ith vector
            cin>>x;
            temp.push_back(x);
        }
        vv.push_back(temp);
    }
    return 0;
}