//vector--> dynamic memory.....once vector of declared memory gets full, 
//          it creates a new vector of double memory as declared before.
//          copy elements into new memory and dump the old array.

#include<iostream>
#include<vector>            //( iostream + vector ) = bits/stdc++.h
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity-> "<<v.capacity()<<endl;        //capacity-> max element vector can store.

    v.push_back(1);                                 //insert element
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size-> "<<v.size()<<endl;                //size-> no. of elements in vector.
    cout<<"Capacity-> "<<v.capacity()<<endl;        //showing double-> dynamic nature of vector.
    
    cout<<"Element at second index-> "<<v.at(2)<<endl;
    cout<<"Front element-> "<<v.front()<<endl;
    cout<<"Last element-> "<<v.back()<<endl;

    cout<<"Before pop-> ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();

    cout<<"After pop-> ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size is "<<v.size()<<" and capacity is "<<v.capacity()<<endl;
    v.clear();
    cout<<"After clear size is "<<v.size()<<" and capacity is "<<v.capacity()<<endl;

    //initialise vector of size 5 and all elements as 1
    vector<int> a(5,1);
    cout<<"print a-> ";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    //print one vector into another
    vector<int> copy(a);
    cout<<"copy of a-> ";
    for(int i:copy){
        cout<<i<<" ";
    }
    cout<<endl;
}
 