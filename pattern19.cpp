/*      ****
        ***
        **
        *       */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=n;
        while(j>=i){
            cout<<"*";
            j--;
        }
        int space=i-1;
        while(space<n){
            cout<<" ";
            space++;
        }
        cout<<endl;
        i++;
    }
}
