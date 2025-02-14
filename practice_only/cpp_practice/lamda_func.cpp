#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    //lambda function
    cout<<[](int a, int b){return a+b;} (10,20)<<endl;

    //if want to store the lambda function in a variable
    auto sum = [](int a, int b){return a+b;};
    cout<<sum(10,30)<<endl;

    auto sum1 = [](vector<int> v){
        cout<<"Sum = "<<accumulate(v.begin(),v.end(),0)<<endl;
    };
    sum1({1,2,3,4,5,6,7});//sum of vector elements, can send any number of elements
    return 0;
}