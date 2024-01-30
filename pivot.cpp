//pivot element using binary search-->
//pivot: minimum element in a rotated sorted array(ex: {5,6,1,2,3,4})

#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    int array[5]={7,8,1,2,3};

    int ans=pivotElement(array,5);
    cout<<"index of pivot element is "<<ans<<endl;
}