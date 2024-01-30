#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"Sum= "<<sum<<endl;
}