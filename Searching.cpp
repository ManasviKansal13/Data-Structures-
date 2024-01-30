#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key)
            return mid;
        else if(key<arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int a[6]={4,5,6,1,2,3,};
    int b[7]={1,3,6,9,13,15,21};
    int ele;
    cout<<"enter element to be searched";
    cin>>ele;

    //Linear Search:
    cout<<"In Linear Search, ";
    int ans=linearSearch(a,6,ele);
    if(ans>=0)
        cout<<"Element found at index "<<ans<<endl;
    else 
        cout<<"Element not found."<<endl;

    //Binary Search;
    cout<<"In Binary Search, ";
    ans=binarySearch(b,7,ele);
    if(ans>=0)
        cout<<"Element found at index "<<ans<<endl;
    else 
        cout<<"Element not found."<<endl;
}