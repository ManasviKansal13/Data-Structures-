 //data stores in key-value format
 //1 key can point to 1 value

 #include<iostream>
 #include<map>
 using namespace std;

 int main(){
    map<int,string> m;
    m[1]="Devansh";
    m[4]="Singh";
    m[2]="Dev";
    //another way to insert
    m.insert({3,"Dobu"});

    cout<<"Key of map m-> ";
    for(auto i:m){
        cout<<i.first<<" ";
    }cout<<endl;

    cout<<"value of map m-> ";
    for(auto i:m){
        cout<<i.second<<" ";
    }cout<<endl;

    cout<<"Key-Value pair of map m-> "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //key is present or not?
    cout<<"1 is present? -> "<<m.count(1)<<endl;

    //erase key
    m.erase(2);
    cout<<"Key-Value pair of map m after erase-> "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(1);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

 }