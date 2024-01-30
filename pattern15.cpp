/*      A
        BC
        CDE
        DEFG     */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}