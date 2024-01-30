#include<bits/stdc++.h>
using namespace std;

void intersection(int arr[], int brr[], int n){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i]==brr[j]) cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={2,3,4,7,8};

    intersection(a,b,5);
}
