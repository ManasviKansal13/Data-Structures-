//stores unique element
//sorted order as output

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    cout<<"Set s-> ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    //erase element at it index
    set<int>::iterator it=s.begin();
    it++; 
    s.erase(it);

    cout<<"set after erase-> ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    //check whether element is present or not
    cout<<"5 is present? -> "<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(5);
    cout<<"value at itr-> "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

}