#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==0)
        return 1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int ans=factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter value of n & r: "<<endl;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<answer<<endl;
}