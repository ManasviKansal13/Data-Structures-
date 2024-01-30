//square root using binary search-->

#include<bits/stdc++.h>
using namespace std;

long solution(int n){
        int s=0;
        int e=n;
        long mid=s+(e-s)/2;
        long ans=-1;
        while(s<=e){
            long sq=mid*mid;
            if(sq==n){
                return mid;
            }
            else if(sq<n){
                s=mid+1;
                ans=mid;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

double morePrecise(int n, int temp, int precise){
    double factor=1;
    double ans=temp;
    for(int i=0;i<precise;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;

    int temp=solution(x);
    cout<<"Square root= "<<morePrecise(x, temp, 3)<<endl;

    return 0;
}