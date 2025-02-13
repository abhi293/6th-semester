#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

//map keeps keys in sorted order automatically
//note that map is implemented using red-black tree, so it is always sorted while unordered_map is implemented using hash table and always unsorted, hence time complexity is O(1) for unordered_map

//map<pair<int, int>, int> m1; //permitable
//map<vector<int>, int> m1; //not permitable
//map<set<int>, int> m1; // permitable
//unordered_map<string,int> m1; //permitable
//unordered_map<set<int>, int> m1; //not permitable
//unordered_map<pair<int, int>, int> m; //not  permitable

//multimap is similar to map, but allows duplications

void printMap(map<int, string> &m){
    cout<<"Size of map is : "<<m.size()<<endl;
    for(auto &i : m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
}

//map has time complexity of O(logn) (for iny type keys) for insertion, deletion and searching, etc
//if string type keys are used, then s.size() * logn time complexity

int main(){
    map<int , string> m = {{1, "one"}, {2, "two"}, {3, "three"}}; // Initialization of map
    m[4] = "four"; // Inserting a new key-value pair (O logn time complexity), even if the key is not present in the map

    cout<< "Iterating over the map using classical method or full declaration method"<<endl;
    map<int, string>::iterator it;
    for(it = m.begin(); it != m.end(); it++){  //use rbegin and rend for reverse iteration
        cout<<it->first<<" : "<<it->second<<endl; //or cout<<(*it).first<<" : "<<(*it).second<<endl;
    }

    m[4]="FOUR";//updating the value of key 4 , not creating duplicate key
     cout<<"using range based loop with auto-keyword"<<endl;
        printMap(m);

    cout<<"m.find usage :"  <<endl;
    auto it1 = m.find(3); //find function returns an iterator to the key if found, else returns m.end()
    if(it1 != m.end()){ //iterator i1 starts from 0th index, keeps searching for the key 3 until the end i.e m.end
        cout<<"Found : "<<it1->first<<" : "<<it1->second<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    cout<<"m.erase usage :"<<endl;
    auto it2 = m.find(2);// deleting the key 2
    if(it2 != m.end()){ //similar to temp in linked-list that will search until the end of list
        m.erase(it2); //erasing the key 2
    }
    else{
        cout<<"Key not found"<<endl;
    }
    printMap(m);
    return 0 ;
}