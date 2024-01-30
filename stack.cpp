//Last In First Out

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Devansh");
    s.push("Singh");
    //printing top element
    cout<<"Top element-> "<<s.top()<<endl;

    cout<<"size of stack-> "<<s.size()<<endl;

    //pop element
    s.pop();
    cout<<"Top element after pop-> "<<s.top()<<endl;

    cout<<"Empty or not-> "<<s.empty()<<endl;
}