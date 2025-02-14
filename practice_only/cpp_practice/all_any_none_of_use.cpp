#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//all_of, any_of, none_of are used to check if all, any or none of the elements in the range satisfy the condition
//all is similar to logical AND, any is similar to logical OR and none is similar to logical NOT

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    //check if all elements are positive using all_of
    cout<<"Note: 1 means yes, 0 means No"<<endl;
    cout<<"Are all positive? "<<all_of(v.begin(),v.end(),[](int x) {return x>0;});//square brackets are used to pass lambda function
    cout<<endl;
    cout<<"Are there any divisible by 2? "<<any_of(v.begin(),v.end(),[](int x) {return x%2==0;});
    cout<<endl;
    //none_of is similar to all_of, but it checks if none of the elements satisfy the condition
    cout<<"Are there none divisible by 2? "<<none_of(v.begin(),v.end(),[](int x) {return x%2==0;});
    cout<<endl;
    return 0;
}