#include<bits/stdc++.h>
using namespace std;

//length function
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

//reverse function
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    int len=getLength(name);
    cout<<"Length of string-> "<<len<<endl;

    reverse(name,len);
    cout<<"Reverse of string-> "<<name<<endl;



    //inbuilt functions of string

    char s1[]="devansh";
    char s2[]="";

    //length function
    cout<<"Length of s1-> "<<strlen(s1)<<endl;
    cout<<"Size of s2-> "<<strlen(s2)<<endl;

    //copy s1 -> s2
    strcpy(s2,s1);
    cout<<"String s2-> "<<s2<<endl;

    //compare s1 & s2
    cout<<"s1==s2 ?? -> "<<strcmp(s1,s2)<<endl;

    return 0;
}