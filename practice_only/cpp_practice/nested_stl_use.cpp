#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main(){
    map<pair<string, string>,vector<int>> m; // 1 pair can have multiple values
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        string fname,lname;
        cout<<"Enter the first name & last name for "<<i+1<<"th element: "<<endl; //eg, abhinav anand can have 5 subjects (5 is vector of marks) && abhinav anand is a pair
        cin>>fname>>lname;
        int sub;
        cout<<"Enter the number of subjects: ";
        cin>>sub;
        for(int j=0;j<sub;++j){
            int marks;
            cout<<"Enter the marks of subject "<<j+1<<": ";
            cin>>marks;
            m[{fname,lname}].push_back(marks);
        }
    }
    for(auto &pr:m){
        cout<<pr.first.first<<" "<<pr.first.second<<" ";  // pr.first.first is first name and pr.first.second is last name, pr.first is pair of first name and last name
        for(auto &marks:pr.second){
            cout<<marks<<" "; // pr.second is vector of marks
        }
        cout<<endl;
    }

    return 0;
}
