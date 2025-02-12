#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

//iterator is a pointer like object that points to an element in a container, similar to a temp pointer that moves in a linked list

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();  //iterator pointing to the first element of the vector i.e like temp = head in linked list
    advance(it, 2); //advance the iterator by 2 positions
    cout << *it << endl; //prints the value at the iterator position

    //to print all the elements of the vector using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) { //it++ is same as temp movement in linked list
        cout << *it << " "; //*it is same as temp->data in linked list
    }
    cout<<endl;
    //to print all the elements of the vector using iterator in reverse order
    for(vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) { //it++ is same as temp movement in linked list
        cout << *it << " "; //*it is same as temp->data in linked list
    }

    //iterator for vector of pairs
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it1 ;
    cout << "Printing vector of pairs" << endl;
    for(it1 = vp.begin(); it1 != vp.end(); it1++) {
        cout << it1->first << " " << it1->second << endl; //or, (*it1).first << " " << (*it1).second << endl;  same thing
    }

    return 0;
}