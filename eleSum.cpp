#include<bits/stdc++.h>
using namespace std;

void pairSum(int arr[], int n, int k){
    cout<<"Pair sum= "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k) cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}

void tripletSum(int arr[], int n, int k){
    cout<<"Triplet sum= "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int l=j+1;l<n;l++){
                if(arr[i]+arr[j]+arr[l]==k) cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<endl;
            }
        }
    }
}

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int sum;
    cout<<"Enter sum u want to search: ";
    cin>>sum;

    pairSum(array,10,sum);
    tripletSum(array,10,sum);

}
