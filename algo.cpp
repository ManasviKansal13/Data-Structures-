#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    //directly implement binary search
    cout<<"Finding 4 through binary search-> ";
    cout<<binary_search(v.begin(),v.end(),4)<<endl;

    //upper and lower bound
    cout<<"Lower bound-> "<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl;
    cout<<"Upper bound-> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    //min max function
    int a=6;
    int b=5;
    cout<<"Max-> "<<max(a,b)<<endl;
    cout<<"Min-> "<<min(a,b)<<endl;

    //swap function
    swap(a,b);
    cout<<"a-> "<<a<<" "<<"b-> "<<b<<endl;

    //reverse string
    string s="abcde";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    //rotate vector 
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"vector after rotate-> ";
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    //sort function--> based on intro sort
    //intro sort--> based on 3 sorts(quick,heap,insertion)
    sort(v.begin(),v.end());
    cout<<"vector after sort-> ";
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

}