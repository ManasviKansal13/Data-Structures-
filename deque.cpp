//dequeue-> doubly ended queue.
//dynamic memory.
//random access using at() operation.

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(0);
    d.push_back(2);

    cout<<"dequeue d-> ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    //pop element from back
    d.pop_back();
    cout<<"dequeue d after pop_back-> ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //pop element from front 
    d.pop_front();
    cout<<"dequeue d after pop_front-> ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    cout<<"dequeue d-> ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"element at second index-> "<<d.at(2)<<endl;
    cout<<"front element-> "<<d.front()<<endl;
    cout<<"last element-> "<<d.back()<<endl;
    cout<<"Empty or not-> "<<d.empty()<<endl;

    //erasing data
    cout<<"size before erase-> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+3);     //erasing in dequeue needs range to be mentioned.
    cout<<"size after erase-> "<<d.size()<<endl;

    //dequeue after erase
    cout<<"dequeue d after erase-> ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;


}


