/*      1
        21
        321
        4321    */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1;
            j++;
        }
        i++;
        cout<<endl;
    }
}