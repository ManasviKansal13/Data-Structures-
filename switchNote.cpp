#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    cout<<"enter amount"<<endl;
    cin>>amount;

    int r100,r50,r20,r1;
    r100=r50=r20=r1=0;
    switch(amount>=100){
        case 1: 
            r100=amount/100;
            amount=amount-r100*100;
            break;
    }
    switch(amount>=50){
        case 1: 
            r50=amount/50;
            amount-=r50*50;
            break;
    }
    switch(amount>=20){
        case 1: 
            r20=amount/20;
            amount-=r20*20;
            break;
    }
    switch(amount>=1){
        case 1: 
            r1=amount/1;
            amount-=r1;
            break;
    }
    cout<<"100 rupees note: "<<r100<<endl;
    cout<<"50 rupees note: "<<r50<<endl;
    cout<<"20 rupees note: "<<r20<<endl;
    cout<<"1 rupees note: "<<r1;
}