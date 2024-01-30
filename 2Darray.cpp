#include<bits/stdc++.h>
using namespace std;

//function to search element 
bool isPresent(int arr[3][3], int target, int i, int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum
void rowSum(int arr[3][3], int row, int col){
    cout<<"row wise sum-> "<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

//return row index with largest sum
int largestSumRow(int arr[3][3], int row, int col){
    int maxi=INT_MIN;
    int maxidx=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            maxidx=row;
        }           
    }
    cout<<"Maximum sum of row is-> "<<maxi<<endl;
    return maxidx;
}

int main(){
    int arr[3][3];

    cout<<"Enter elements of arr: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"2D array arr-> "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int brr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"2D array brr-> "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    int crr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    cout<<"2D array crr-> "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

    //search element in arr
    int target;
    cout<<"enter element to be searched-> ";
    cin>>target;

    if(isPresent(arr,target,3,3))
        cout<<"Element found"<<endl;
    else 
        cout<<"Not found"<<endl;

    //print row wise sum
    rowSum(arr,3,3);

    //print index of row with largest sum
    int ans=largestSumRow(arr,3,3);
    cout<<"Index of row-> "<<ans<<endl;


    return 0;
}