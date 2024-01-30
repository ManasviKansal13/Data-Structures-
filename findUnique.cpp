#include<bits/stdc++.h>
using namespace std;

void unique(int arr[], int n){
    for(int i=0;i<6;i++){
        bool c=1;
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j])
                c=0;
        }
        if(c)
            cout<<arr[i]<<" ";
    }
}

int main(){
    int array[6]={1,2,3,3,2,1};

    unique(array,6);
}