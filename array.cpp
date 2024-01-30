//array--> fixed memory......same data type.

#include<iostream>                      //instead of (iostream+array), use (bits/stdc++.h)
#include<array>                         //include STL array
using namespace std;

int main(){
    int normal[5]={1,2,3,4,5};          //normal declaration of array

    array<int,5> a={1,2,3,4,5};         //STL declaration

    int size=a.size();                  //size of array

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //indexing
    cout<<"Element of 2nd Index= "<<a.at(2)<<endl;

    //isEmpty??
    cout<<"Array is empty? "<<a.empty()<<endl;

    //front and last element
    cout<<"front element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;
}
