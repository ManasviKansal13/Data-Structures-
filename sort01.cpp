#include<bits/stdc++.h>
using namespace std;

void sort01(int arr[], int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) c++;
    }
    for(int i=0;i<c;i++){
        arr[i]=0;
    }
    for(int i=c;i<n;i++){
        arr[i]=1;
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[10]={0,1,0,1,0,1,0,1,0,1};

    sort01(array,10);
    printArray(array,10);

}