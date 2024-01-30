/*      AAAA
        BBBB
        CCCC
        DDDD    */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}