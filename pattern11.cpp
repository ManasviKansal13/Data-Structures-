/*      ABC
        DEF
        GHI     */

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+count-1;
            cout<<ch;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}