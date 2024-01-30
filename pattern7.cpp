/*      1
        23
        456
        78910      */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}