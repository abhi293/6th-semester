#include<iostream>
#include<set>
using namespace std;

//set is implemented using red-black tree, so it is always sorted
//set is similar to map, but only keys and no values
//set is used to store unique elements only

void printSet(set<string> &s){  //any changes here were also reflect on s
    cout<<"Size of set is : "<<s.size()<<endl;
    for(auto &i : s){ //range based loop using iterator i
        cout<<i<<endl;
    }
}

int main(){

    set<string>s;  //set is always sorted, so takes O(logn) time complexity for insertion, deletion, searching, etc
    //use unordered_set for unsorted set, with lower time complexity of O(1)

    s.insert("abc"); //inserting elements in set
    s.insert("zsdf");
    s.insert("abc"); //duplicate elements are not allowed in set
    s.insert("bcd");
    s.insert("efg");

    cout<<"set before erasing : "<<endl;
    printSet(s);

    cout<<"set after erasing : "<<endl;

    auto it = s.find("abc"); //find function returns an iterator to the key if found, else returns s.end()
    if(it != s.end()){
        s.erase(it); //erasing the key "abc"
    }
    else{
        cout<<"Key not found"<<endl;
    }
    //s.erase("abc"); //direct method to erase the key "abc"
    printSet(s);

    //multiset is similar to set, but allows duplications, also sorted
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("bcd");
    ms.insert("efg");

    auto it1 = ms.find("abc");//finds the first occurence of "abc", ignores the rest if present

    if(it1 != s.end()){
        ms.erase(it1); //erasing the key "abc"
    }
    else{
        cout<<"Key not found"<<endl;
    }

    //ms.erase("abc"); //direct method to erase the key "abc" but it WILL DELETE ALL OCCURENCES OF "abc"

    return 0;
}