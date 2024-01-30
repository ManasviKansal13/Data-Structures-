#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int n){
    for(int i=0;i<6;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[6]={1,2,3,4,5,6};

    swap(array,6);
    printArray(array,6);
}