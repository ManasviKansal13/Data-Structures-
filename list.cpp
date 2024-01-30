//type of doubly linked list.

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(0);
    l.push_back(2);
    cout<<"List l-> ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //erasing element
    cout<<"element after erase-> ";
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of l-> "<<l.size()<<endl;

    list<int> copy(l);
    cout<<"copy of list L-> ";
    for(int i:copy){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> n(5,100);
    cout<<"list of 5 elements(100)-> ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

}