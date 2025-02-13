#include <iostream>
#include <vector>
using namespace std;

//use of range based loops & autokeyword in cpp
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    cout<<"using range based keyword\n"<<endl;
    for(int i : v){  //use datatype inside the vector component for iterator i
        //i is an iterator referrring to v, that will iterate through every elements of vector v
        //note : using &i will make i a reference to the elements of vector v & changed will also reflect in the vector
        cout << i << " ";

    }
    cout << endl;

    //the above can also be written as
    cout<<"using auto keyword\n"<<endl;
    for(auto i : v){   //auto keyword automatically detects the datatype of the vector component
        cout << i << " ";
    }

    //another example
    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};
    for(pair<int, int> &i : v1){  //auto will automatically detect the datatype for v1, if used with the iterator

        cout <<"\nbefore "<< i.first << " " << i.second ;

        //let's update 1st element of each pairs uing iterator
        i.first = i.first + 1; //by +1
        cout <<"\nafter update " << i.first << " " << i.second << endl;

    }

    return 0;
}