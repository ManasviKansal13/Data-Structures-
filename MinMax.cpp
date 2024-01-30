#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int getMax(int arr[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[100];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    cout<<"Max element= "<<getMax(array,size)<<endl;
    cout<<"Min element= "<<getMin(array,size)<<endl;

}