#include<bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n){
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j])
                cout<<arr[j]<<" ";
        }
    }
}

int main(){
    int array[6]={1,2,2,3,4,5};

    duplicate(array,6);
}