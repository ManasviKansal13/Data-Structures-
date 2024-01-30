// First In First Out

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Devasnh");
    q.push("Singh");

    cout<<"Front element-> "<<q.front()<<endl;
    cout<<"Size of queue-> "<<q.size()<<endl;

    q.pop();

    cout<<"Front element after pop-> "<<q.front()<<endl;
    cout<<"Empty or not-> "<<q.empty()<<endl;

}