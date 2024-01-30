//element ro be fetched is first element
//maxheap-> fetched element is maximum
//minheap-> fetched element is minimum

#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(0);
    maxi.push(2);
    maxi.push(3);
    maxi.push(1);

    int n=maxi.size();
    cout<<"max heap-> ";
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }    
    cout<<endl;

    mini.push(0);
    mini.push(2);
    mini.push(5);
    mini.push(1);

    int m=mini.size();
    cout<<"min heap-> ";
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }    
    cout<<endl;

    cout<<"mini is empty?? -> "<<mini.empty()<<endl;
}

