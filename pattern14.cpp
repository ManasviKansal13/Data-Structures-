/*      A
        BC
        DEF     */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+count-1;
            cout<<ch;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}